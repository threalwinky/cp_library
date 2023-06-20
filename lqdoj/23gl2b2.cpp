#include<bits/stdc++.h>
using namespace std;
#define int unsigned long long
const int mod = 1e9 + 7;
inline int add(int a, int b){ return (a%mod+b%mod)%mod; }
inline int sub(int a, int b){ return (a%mod-b%mod+mod)%mod; }
inline int mul(int a, int b){ return (a%mod*b%mod)%mod; }
int v[300009], f[300009];

int supow(int a, int b){
    if (b==0) return 1;
    int tmp = supow(a, b/2);
    if (b&1) return tmp*tmp*a;
    return tmp*tmp;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> v[i];
        f[i] = add(f[i-1], v[i]);
        //cout << f[i] << " ";
    }
    int ans = 0;
    for (int i=2; i<=n; i++){
        ans = add(ans, mul(v[i], f[i-1]));
        //cout << v[i] << " " << i-1 << " " << f[i-1] << " " << ans <<  "\n";
    }
    cout << ans;
}