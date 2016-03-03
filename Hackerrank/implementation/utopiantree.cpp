#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* problem found at https://www.hackerrank.com/challenges/utopian-tree */

int treeGrowth(int cycles) {
    int height = 1;
    if (cycles % 2  == 0) {
        for(int i = 0; i < cycles/2; i++)
            height = height * 2 + 1;
        return height;
    } else {
        for(int i = 0; i < (cycles-1)/2; i++)
            height = height * 2 + 1;
        height = height * 2;
        return height;
    }
}


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout << treeGrowth(n) << endl;
    }
    return 0;
}