#include <fstream>
#include <string>
#include <iostream>
#include <math.h>
#include <algorithm>
#include<bits/stdc++.h>
#include <vector>
using namespace std;

double n = 100000;
double sum = 0;
int main(){
    for (double x = 1; x < n/2; x++){
        sum += (n/x);
    }
    cout << sum << "\n";
}
