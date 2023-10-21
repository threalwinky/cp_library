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

int a[203];
int f[203][203*1003];
//------------------------------------------------------------------------------------
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    opf(1);
    int n;
    cin >> n;
    int sum = 0;
    for (int i=1; i<=n; i++){
        cin >> a[i];
        sum += a[i];
    }
    cout << sum << "\n";
    for (int i=1; i<=n; i++){
        for (int j=1; j<203*1003; j++){
            if (j == a[i]){
                f[i][j] += 1;
            }
            if (j >= a[i])
            f[i][j] = f[i][j] + f[i-1][j] + f[i-1][j-a[i]];
            else f[i][j] = f[i][j] + f[i-1][j];
        }
    }
    vector<int> v;
    for (int i=1; i<203*1003; i++){
        if (f[n][i] > 0) v.pb(i);
    }
    cout << v.size() << "\n";
    for (auto it : v){
        cout << it << " ";
    }
//    for (int i=0; i<=n; i++){
//        for (int j=0; j<=25; j++){
//            cout << f[i][j] << " ";
//        }
//        cout << "\n";
//    }
}
