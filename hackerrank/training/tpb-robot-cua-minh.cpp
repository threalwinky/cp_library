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
    int n, k;
    cin >> n >> k;
    stack<int> q;
    for (int i=n; i>=1; i--){
        q.push(i);
    }
    while (k--){
        int x;
        cin >> x;
        q.push(x);
    }
    map<int, int> m;
    while (!q.empty()){
        if (m[q.top()] == 0){
            cout << q.top() << "\n";
            m[q.top()] = 1;
        }
        q.pop();
    }
}
