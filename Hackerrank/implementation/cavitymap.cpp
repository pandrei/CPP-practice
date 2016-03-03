#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/* problem found at https://www.hackerrank.com/challenges/cavity-map */
    void cavityMap(vector<string> grid, int n) {
        //print first line
        for(int j = 0; j < n ; j++) {
            cout << grid[0][j];
        }
        cout << endl;

        for(int i = 1; i < n - 1; i++) {   
            cout << grid[i][0];
            for(int j = 1; j < n - 1; j++) {
                bool cavity = true;
                for(int x = -1;  x < 2; x++) {
                    if(x){
                        if(grid[i][j] <= grid[i+x][j])
                            cavity = false;
                        if(grid[i][j] <= grid[i][j+x])
                            cavity = false;
                    }
                }
                if(cavity)
                    cout << 'X';
                else
                    cout << grid[i][j];
            }
            cout << grid[i][n-1];
            cout << endl;
        }
        //print last line
        if(n > 1)
        for(int j = 0; j < n; j++) {
            cout << grid[n-1][j];
        }
}

int main(){
    int n;
    cin >> n;
    vector<string> grid(n);
    for(int grid_i = 0;grid_i < n;grid_i++){
       cin >> grid[grid_i];
    }
    cavityMap(grid, n);
    return 0;
}
