#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/* problem found at https://www.hackerrank.com/challenges/manasa-and-stones */
    void total(int n , int a, int b) {
        if (a < b) {
            for(int i = 0; i < n; i++)
                cout << (a *(n-1-i) + b * i) << " ";
        }
        
            else if (a > b) {
                for(int i = 0; i < n; i++)
                    cout << (a * i + b * (n-1-i)) << " ";
            }
            else 
                cout << a * (n-1);
    cout << endl;
    }

int main() {
    int t;
    int n, a, b;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n >> a >> b;
        total(n, a, b);
    }
    return 0;
}
