#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/* problem  found at https://www.hackerrank.com/challenges/find-digits */
int evenlyDivide(int number) {
    int ret = 0;
    int bkp = number;
    int digit;
    while(bkp > 0) {
        digit = bkp % 10;
        if (digit != 0 && number % digit == 0)
            ret++;
        bkp = bkp / 10;
    }
    return ret;
}
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout << evenlyDivide(n) << endl;
    }
    return 0;
}
