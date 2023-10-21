#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll maxL = 1e4+9;
const ll maxD = 1e2+4;
const ll mod = 1e9 + 7;
ll f[maxL][maxD];

ll add(ll a, ll b){
    return (a%mod + b%mod)%mod;
}

void init(ll l, ll d){
    f[l][0] = 1;
    for (int i=l-1; i>=0; i--){
        for (int j=0; j<d; j++){
            for (int k=0; k<10; k++){
                f[i][j] = add(f[i][j], f[i+1][(j+k)%d]);
            }
            cout << f[i][j] << " ";
        }
        cout << "\n";
    }
}

ll query(string s, ll d){
    ll ans = 0, c = 0;
    for (int i=0; i<s.length(); i++){
        for (int j=0; j<(s[i]-'0'); j++)
            ans = add(ans, f[i+1][(c+j)%d]);
        c = (c + (s[i] - '0'))%d;
    }
    if (c == 0) ans++;
    if (--ans < 0) ans += mod;
    return ans % mod;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    ll d;
    cin >> s >> d;
    init(s.size(), d);
    cout << query(s, d);
}
