#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* problem found at https://www.hackerrank.com/challenges/sherlock-and-the-beast */

void decentNumberGenerator(int digits) {
    int maxFives = digits;
    if(digits % 3 == 0) {
        for(int i = 0; i < digits; i++)
            cout << "5";
    cout << endl;   
    return;
    }
    
    //get the max nr of fives to be divisible by 3
    while(maxFives > 0 && maxFives % 3 != 0)
        maxFives--;
    
    //decrease the multiplicator of 3
    while(maxFives > 0 && (digits - maxFives) % 5 != 0)
        maxFives = maxFives - 3;
    
    if(maxFives == 0 && digits % 5 != 0) {
        cout << "-1" << endl;
        return;
    }
    
    for(int i = 0; i < maxFives; i++)
        cout << "5";
    for(int i = 0; i < digits - maxFives; i++)
        cout << "3";
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        decentNumberGenerator(n);
    }
    return 0;
}