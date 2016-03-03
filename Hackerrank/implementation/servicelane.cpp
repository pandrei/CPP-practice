#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/* problem found at https://www.hackerrank.com/challenges/service-lane */
int rangeMinMax(vector<int> width, int start, int end) {
    int min = 3;
    for(int i  = start; i <= end; i++) {
        if (width.at(i) < min)
            min = width.at(i);
    }
    return min;
}
int main(){
    int n;
    int t;
    cin >> n >> t;
    vector<int> width(n);
    for(int width_i = 0;width_i < n;width_i++){
       cin >> width[width_i];
    }
    for(int a0 = 0; a0 < t; a0++){
        int i;
        int j;
        cin >> i >> j;
        cout << rangeMinMax(width, i, j) << endl;
    }
    return 0;
}