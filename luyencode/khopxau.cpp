#include<bits/stdc++.h>
#include <cstdio>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    string t;
    cin>>s>>t;
    s = t + "#" + s;
    int n = s.length();
    vector<int> pi(n, 0);
    for (int i=1; i<n; i++){
        int j = pi[i - 1];
        while (j > 0 && s[i] != s[j]) j = pi[j - 1];
        if (s[i] == s[j]) j++;
        pi[i] = j;
    }
    int m = t.length();
    for (int i=m + 1; i<n; i++){
        if (pi[i] == m) {
            cout<<i - 2 * m + 1<<" ";
        }
    }
}
