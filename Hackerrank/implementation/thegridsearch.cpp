#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/* problem found at https://www.hackerrank.com/challenges/the-grid-search */
void PatternMatchMatrix( vector<string> G, vector<string> P, int R, int C, int r, int c) {
 int endRow = R - r;
 bool found = true;
 int endCol = C - c;
 int i, j;

     i = 0;
     while(i <= endRow) {
         j = 0; 
         while(j <= endCol) {
             found = true;
             
             //cout << i << j << endl << endl;
             for(int k = 0; k < r; k++) {
                 for(int p = 0; p < c; p++) {
                     if(P[k][p] != G[k+i][p+j]) {
                         found = false;
                         break;
                     }
                     if(!found)
                         break;
                 }  
             }
         j++; 
         if(found == true) {
            cout << "YES" << endl;
            return;
            }
         }
         i++;
  }
cout << "NO" << endl;
}
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int R;
        int C;
        cin >> R >> C;
        vector<string> G(R);
        for(int G_i = 0;G_i < R;G_i++){
           cin >> G[G_i];
        }
        int r;
        int c;
        cin >> r >> c;
        vector<string> P(r);
        for(int P_i = 0;P_i < r;P_i++){
           cin >> P[P_i];
        }
        PatternMatchMatrix(G, P, R, C, r, c);
    }
    return 0;
}
