#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int inf = 1e9 + 11, MOD = 1e9 + 7;
const ll INF = 4557430888798830399;
string s;
int p = 0, log_p, res = inf, ans;
double prefix[100005];
int fact[100005], inv[100005];
int dc(int a, int b) {
    int c = 1;
    for (; b; b >>= 1, a = (ll)a * a % MOD)
        if (b & 1)
            c = (ll)c * a % MOD;
    return c;
}
int get(int x, int y) {
    return (ll)fact[y] * inv[x-1] % MOD;
}
int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cin >> s;
    for (auto ch : s)
        p = ((ll)p * 10 + ch - '0') % MOD;
    fact[0] = 1;
    for (int i = 1; i <= 1e5; ++ i)
        fact[i] = (ll)fact[i-1] * i % MOD;
    inv[100000] = dc(fact[100000], MOD - 2);
    for (int i = 1e5 - 1; i >= 0; -- i)
        inv[i] = (ll)inv[i+1] * (i + 1) % MOD;
    logp = s.size();
    for (int x = 1; x <= 1e5; ++ x) {
        prefix[x] = prefix[x-1] + log10(x);
        int l = 0, r = x + 1;
        while (r - l > 1) {
            int m = l + (r - l)/2;
            double cur = prefix[x] - prefix[m-1];
            if (cur <= logp)
                r = m;
            else
                l = m;
        }
        for (int j = max(r - 10, 1); j <= min(r + 10, x); ++ j) {
            if (get(j, x) == p)
                if (res > j)
                    res = j, ans = x;
        }
    }
    cout << res << " " << ans << "\n";
}