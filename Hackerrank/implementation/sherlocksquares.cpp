#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
/* problem found at https://www.hackerrank.com/challenges/sherlock-and-squares */
int sqrInRange(int min , int max) {
    int num_sqr = 0;
    int minroot, maxroot;
    minroot = sqrt(min);
    
    while((minroot * minroot) < min)
        minroot++;
    
    while((minroot*minroot) <= max) {
        num_sqr++;
        minroot++;
    };
    
    return num_sqr;
}

int main() {
    int tests;
    cin >> tests;
    int min, max;
    for(int i = 0; i < tests; i++) {
        cin >> min >> max;
        cout << sqrInRange(min, max) << endl;
    }
    return 0;
}