#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/* problem found at https://www.hackerrank.com/challenges/angry-professor */

void validateTest(vector<int> input, int n, int k) {
    int students = 0;
    for(vector<int>::iterator i = input.begin(); i != input.end(); i++)
        if(*i <=0)
            students++;
    if(students >= k)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        vector<int> a(n);
        for(int a_i = 0;a_i < n;a_i++){
           cin >> a[a_i];
        }
        validateTest(a, n, k);
    }
    return 0;
}
