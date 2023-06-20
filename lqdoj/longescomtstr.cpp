#include                    <bits/stdc++.h>
using namespace             std;
#define pb(x)               push_back(x)
#define fi                  first
#define se                  second
#define endl                cout<<"\n";
//#define int               long long
const int maxN =            3e5;
const int mod =             1e9 + 7;

int f[3003][3003];

signed main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    string s, t;
    cin >> s >> t;
    for (int i=1; i<=s.length(); i++){
        for (int j=1; j<=t.length(); j++){
            if (s[i-1] == t[j-1]) f[i][j] = f[i-1][j-1]+1;
            else {
                f[i][j] = max(f[i-1][j], f[i][j-1]);
            }
        }
    }
    stack<int> st;
    int i = s.length(), j = s.length();
    while (i >= 1 && j >= 1){
        if (f[i][j] == f[i-1][j-1] + 1){
            if (f[i][j] != f[i-1][j] && f[i][j] != f[i][j-1]){
                cout << s[i-1] << " ";
                i--;
                j--;
            }
            else{
                if (f[i-1][j] > f[i][j-1]) i--;
                else j--;
            }
        }
        else{
            if (f[i-1][j] > f[i][j-1]){
                i--;
            }
            else j--;
        }
    }
}