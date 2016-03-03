#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/* problem found at  https://www.hackerrank.com/challenges/chocolate-feast */
int numChocolates(int n, int c, int m) {
    int choc =  n / c; //chocolates
    int ret = choc;
    int leftover = 0;
    while (choc >= m) {
        ret = ret + choc / m;
        leftover = choc % m;
        choc = choc / m + leftover;
    }
    return ret;
}
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int c;
        int m;
        cin >> n >> c >> m;
        cout << numChocolates(n, c, m) << endl;
    }
    return 0;
}
