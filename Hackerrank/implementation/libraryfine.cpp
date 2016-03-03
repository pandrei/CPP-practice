#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/* problem found at https://www.hackerrank.com/challenges/library-fine */
    int printDate(int d, int m, int y, int d2, int m2, int y2) {
        if((y-y2) > 0)
            return 10000;
        if ((y-y2) < 0)
            return 0;
        if((m-m2) > 0)
            return 500 * (m-m2);
        if((m-m2) < 0)
            return 0;
        if((d-d2) > 0)
            return 15 * (d-d2);
     return 0;
    }
int main(){
    int d1;
    int m1;
    int y1;
    cin >> d1 >> m1 >> y1;
    int d2;
    int m2;
    int y2;
    cin >> d2 >> m2 >> y2;
    cout << printDate(d1, m1, y1, d2, m2, y2);
    return 0;
}
