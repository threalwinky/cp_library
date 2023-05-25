#include <bits/stdc++.h>

using namespace std;

const int mod  = 1e9 + 7;
const int maxN = 1e5 + 7;

int n, m;
int st[4 * maxN];
pair <int, int> lazy[4 * maxN];

void fix(int id, int l, int r) {
    int a = lazy[id].first;
    int b = lazy[id].second;
    st[id] += (1ll * a * (r + l) * (r - l + 1) / 2) % mod;
    st[id] %= mod;
    st[id] += (1ll * b * (r - l + 1)) % mod;
    st[id] %= mod;

    if (l != r) {
        lazy[2 * id].first  = (lazy[2 * id].first  + a) % mod;
        lazy[2 * id].second = (lazy[2 * id].second + b) % mod;
        lazy[2 * id + 1].first  = (lazy[2 * id + 1].first  + a) % mod;
        lazy[2 * id + 1].second = (lazy[2 * id + 1].second + b) % mod;
    }
    lazy[id] = {0, 0};
}

void update(int id, int l, int r, int u, int v, int a, int b) {
    fix(id, l, r);
    if (l >  v || r <  u) return;
    if (l >= u && r <= v) {
        lazy[id].first  = a;
        lazy[id].second = (1ll * b - 1ll * u * a + 1ll * mod * mod) % mod;
        fix(id, l, r);
        return;
    }
    int mid = l + r >> 1;
    update(2 * id, l, mid, u, v, a, b);
    update(2 * id + 1, mid + 1, r, u, v, a, b);
    st[id] = (st[2 * id] + st[2 * id + 1]) % mod;
}

int get(int id, int l, int r, int u, int v) {
    fix(id, l, r);
    if (l >  v || r <  u) return 0;
    if (l >= u && r <= v) return st[id];

    int mid  = l + r >> 1;
    int get1 = get(2 * id, l, mid, u, v);
    int get2 = get(2 * id + 1, mid + 1, r, u, v);
    return (get1 + get2) % mod;
}

int main() {
    cin >> n >> m;
    while (m--) {
        int type, l, r, a, b;
        cin >> type >> l >> r;
        if (type == 1) {
            cin >> a >> b;
            update(1, 1, n, l, r, a, b);
        }
        else cout << get(1, 1, n, l, r) << '\n';
    }
}
