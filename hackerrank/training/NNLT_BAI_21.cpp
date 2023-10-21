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
//    for (int i=1; i<=10000; i++){
//        int cnt = 0;
//        for (int j=1; j<=i-1; j++){
//            if (i % j == 0){
//                cnt += j;
//            }
//        }
//        if (cnt == i) cout << i << " ";
//    }
    vector<int> v = {6, 28, 496, 8128, 33550336};
    int cnt = 0;
    int x;
    int i = 1;
    while (cin >> x){
        if (x == 0){
            if (cnt == 0){
                cout << -1;
                return 0;
            }
            break;
        }
        for (auto it : v){
            if (it == x){
                cout << i << "\n";
                cnt++;
            }
        }
        i++;
    }
}
