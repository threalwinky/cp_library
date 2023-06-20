#include                    <bits/stdc++.h>
using namespace             std;
#define pb(x)               push_back(x)
#define fi                  first
#define se                  second
#define endl                cout<<"\n";
#define int               long long
const int maxN =            5e5 + 9;
const int inf =             1e7 + 9;
const int mod =             1e9 + 7;

bool p[inf];
vector<int> v;
void sieve(){
    for (int i=2; i<=1000008; i++){
        if (!p[i]){
            for (int j=i*i; j<=1000008; j+=i){
                p[j] = 1;
            }
            v.push_back(i);
        }
    }
}

map<int, int> m1, m2;

void add1(int x){
    int i = 0;
    while (true) {
        //cout << v[i] << " ";
        if (x % v[i] == 0){
            int tmp = __gcd()
            if (x == 1 || x == 0) break;
        }
        if (x == 1 || x == 0) break;
        i++;
    }
}

void add2(int x){
    int i = 0;
    while (true) {
        //cout << v[i] << " ";
        while (x % v[i] == 0){
            m2[v[i]]++;
            x/=v[i];
            if (x == 1 || x == 0) break;
        }
        if (x == 1 || x == 0) break;
        i++;
    }
}

int supow(int a, int b){
    if (b == 0) return 1;
    int tmp = supow(a, b/2)%mod;
    if (b & 1) return (tmp%mod*tmp%mod*a%mod)%mod;
    return (tmp%mod*tmp%mod)%mod;
}

signed main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    freopen("sample.inp", "r", stdin);
    sieve();
    int n, m;
    cin >> n >> m;
    for (int i=1; i<=n; i++){
        int x;
        cin >> x;
        add1(x);
    }
    for (int i=1; i<=m; i++){
        int x;
        cin >> x;
        add2(x);
    }
    int ans = 1;
    for (auto x : m1){
        //cout << x.fi << " " << x.se << " ";
        ans = (ans % mod * supow(x.first, min(x.second, m2[x.first])) %mod)%mod;
        //cout << supow(x.first, min(x.second, m2[x.first])) % mod << "\n";
    }
    cout << ans;
}