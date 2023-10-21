#include                    <bits/stdc++.h>
using                       namespace std;
//#define int               long long
#define fi                  first
#define se                  second
#define pb(x)               push_back(x)
#define endl                cout<<"\n";
typedef pair<int, int>      ii;
typedef vector<int>         vi;
typedef long double         ldb;
const string F =            "sample";
const string IF =           F + ".inp";
const string OF =           F + ".out";
const ldb PI =              3.14159265358979;
const int maxN =            1e6;
const int mod  =            1e9 + 7;
void opf(bool c){           if (c == 1){
freopen(IF.c_str(),         "r", stdin);
freopen(OF.c_str(),         "w", stdout);}}
//------------------------------------------------------------------------------------
//Code here


//------------------------------------------------------------------------------------
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    opf(0);
    string s;
    int k;
    cin >> s >> k;
    if (s.length() == k){
        cout << 0;
    }
    map<int, int> m;
    for (int i=0; i<s.length(); i++){
        m[s[i]]++;
    }
    if (m.size() == 1){
        for (int i=0; i<k; i++){
            cout << s[0];
        }
        return 0;
    }
    for (int j=1; j<=k; j++){
        vector<int> v, v2;
//        map<int, int> m;

        int n = s.length();
//        if (s[0] < s[1]) v.pb(0);
//        for (int i=1; i<n-1; i++){
//            if (s[i] < s[i-1] && s[i] < s[i+1]){
//                if (m[s[i] == 0){
//                    v.pb(i);
//                    m[s[i]++;
//                }
//            }
//        }

//        if (s[n-1] < s[n-2]){
//            if (m[s[n-1] == 0)
//            v.pb(n-1);
//        }
        v.pb(0);
        for (int i=1; i<n; i++){
            if (s[i] != s[i-1]){
                v.pb(i);
            }
        }
        if (s[v[0]] < s[v[1]]) v2.pb(v[0]);
        for (int i=1; i<v.size() - 1; i++){
            if (s[v[i]] < s[v[i-1]] && s[v[i]] < s[v[i+1]]){
                v2.pb(v[i]);
            }
        }

        if (s[v[v.size()-1]] < s[v[v.size()-2]]){
            v2.pb(v[v.size()-1]);
        }



        string tmp = s;
        s.clear();
        for (int i=0; i<n; i++){
            if (i != v2[0]) s += tmp[i];
        }
//        for (auto x : v){
//            cout << x << " ";
//        }
//        cout << "\n";
    }
    cout << s ;
}
