#include                    <bits/stdc++.h>
using                       namespace std;
#define int               long long
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
    vector<int> v;
    for (int i=1; i<=100; i++){
        int tmp = i * i;
        stack<int> st;
        while (tmp != 0){
            st.push(tmp%10);
            tmp/=10;
        }
        while (!st.empty()){
            v.push_back(st.top());
            st.pop();
        }
    }
//    for (auto x : v){
//        cout << x << " ";
//    }
    int n;
    cin >> n;
    cout << v[n-1];
}
