#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/* problem at https://www.hackerrank.com/challenges/cut-the-sticks */

void cutSticks(vector<int> sticks) {
    bool done = false;
    int min;
    int left;
    while(!done) {
        left = 0;
        done = true;
        min = sticks.size();
        for(int i = 0; i < sticks.size(); i++)
            if(sticks.at(i) < min && sticks.at(i) > 0)
                min = sticks.at(i);
        //cut    
        for(int i = 0; i < sticks.size(); i++)
            sticks[i] = sticks[i] - min;
            
        //check status
        for (int i = 0; i < sticks. size();i++) 
            if (sticks[i] >= 0)
                left++;
        if(left > 0) {
            done = false;
            cout << left << endl;
        }
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    cutSticks(arr);
    return 0;
}
