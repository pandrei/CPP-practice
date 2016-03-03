#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/* problem found at  https://www.hackerrank.com/challenges/caesar-cipher-1 */
    void caesar(string s, int k) {
        int crtChar = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] >= 'a' && s[i] <= 'z' ) {
                crtChar = s[i] + k;
                while(crtChar > 122)
                    crtChar = crtChar - 26;
              s[i] = static_cast<char> (crtChar);
            }
            if(s[i] >= 'A' && s[i] <= 'Z' ) {
                crtChar = s[i] + k;
                while(crtChar > 90)
                    crtChar = crtChar - 26;
              s[i] = static_cast<char> (crtChar);
            }
    }
         cout << s;
}
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;
    caesar(s, k);
    return 0;
}