#include                    <bits/stdc++.h>
using namespace             std;
#define pb(x)               push_back(x)
#define fi                  first
#define se                  second
#define endl                cout<<"\n";
#define int               long long
const int maxN =            5e5 + 9;
const int mod =             1e9 + 7;

int a[maxN], b[maxN];

signed main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    freopen("sample.inp", "r", stdin);
    int n, m;
    cin >> n >> m;
    int f1 = 1, f2 = 1;
    for (int i=1; i<=n; i++){
        cin >> a[i];
        f1 *= a[i]%mod;
    }
    for (int i=1; i<=m; i++){
        cin >> b[i];
        f2 *= b[i]%mod;
    }
    cout << __gcd(f1,f2)%mod;

}