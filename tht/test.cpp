#include                    <bits/stdc++.h>
using namespace             std;
#define pb(x)               push_back(x)
#define fi                  first
#define se                  second
#define endl                cout<<"\n";
//#define int               long long
const int maxN =            3e5;
const int mod =             1e9 + 7;

signed main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    freopen("sample.inp", "w", stdout);
    srand(time(NULL));
    int n = 500000;
    int m = 500000;
    cout << n << " " << m << '\n';
    for (int i=1; i<=n; i++) cout << rand()%100000 + 1 <<" ";
    cout <<"\n";
    for (int i=1; i<=m; i++) cout << rand()%100000 + 1 <<" ";
}