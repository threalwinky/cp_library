#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN = 3e5;
const int mod = 1e9 + 7;
int p[maxN], f[maxN], arr[maxN];
int a, b, n, q;

inline int add(int a, int b){ return (a%mod + b%mod)%mod; }
inline int sub(int a, int b){ return (a%mod - b%mod + mod)%mod; }
inline int mul(int a, int b){ return (a%mod*b%mod)%mod; }

void update(int l, int r){
    p[l] = add(p[l], f[1]);
    p[l+1] = sub(add(p[l+1], f[2]), mul(b, f[1]));
    p[r+1] = sub(p[r+1], f[r-l+2]);
    p[r+2] = sub(p[r+2], mul(a, f[r-l+1]));
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> q;
    cin >> f[1] >> f[2];
    cin >> a >> b;
    for (int i=1; i<=n; i++) cin >> arr[i];
    for (int i=3; i<=maxN - 3; i++){
        f[i] = add(mul(a, f[i-2]), mul(b, f[i-1]));
        //cout << f[i] << " ";
    }
    while (q--){
        int l, r;
        cin >> l >> r;
        update(l, r);
    }
    for (int i=1; i<=n; i++){
        p[i] = add(p[i], add(mul(a, p[i-2]), mul(b, p[i-1])));
        cout << add(p[i], arr[i]) << " ";
    }
}