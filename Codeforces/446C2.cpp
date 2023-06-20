#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN = 400001;
const int mod = 1e9 + 9;
int a[maxN], F[maxN], Fp[maxN];
vector<int> lazy[maxN];

int add(int a, int b){
    return ((a % mod + b % mod) % mod);
}

int sub(int a, int b){
    return ((a%mod - b%mod)%mod + mod) % mod;
}

struct ST{
    vector<int> tree;
    void init(int n){
        lazy.resize(n << 2, 0)
        tree.resize(n << 2, 0);
    }
    void build(int id, int l, int r){
        if (l == r){
            tree[id] = a[l];
            return;
        }
        int m = (l + r) >> 1;
        build(id * 2, l, m);
        build(id * 2 + 1, m + 1, r);
        tree[id] = add(tree[id * 2], tree[id * 2 + 1]);
    }

    void fix(int id, int l, int r){
        if (lazy[id].empty()){ return; }
        for (auto x : lazy[id]){
            int f = x.first;
            int s = x.second;
            //cout << l << " " << r << " " << f << " " << s << "\n";
            tree[id] = add(tree[id], sub(Fp[s], Fp[f - 1]));
            if (l != r){
                int m = (l + r) >> 1;
                lazy[id * 2].push_back({f, f + m - l});
                lazy[id * 2 + 1].push_back({f + m - l + 1, s});
            }
        }
        lazy[id].clear();
    }
    void update(int id, int l, int r, int u, int v, int s){
        fix(id, l, r);
        if (l  > v || r < u) return;
        if (l >= u && r <= v){
            //fix(id, l, r);
            lazy[id] = add(lazy[id], s - F[]);
            fix(id, l, r);
            //debug(lazy[id].fi);
            //debug(lazy[id].se);
            //fix(id, l, r);
            return;
        }
        int m = (l + r) >> 1;
        update(id * 2, l, m, u, v, s);
        update(id * 2 + 1, m + 1, r, u, v, s);
        tree[id] = add(tree[id*2], tree[id*2+1]);
    }

    int get(int id, int l, int r, int u, int v){
        fix(id, l, r);
        if (l > v || r < u) return 0;
        //cout << l << " " << r << " : " << tree[id] << "\n";
        if (l >= u && r <= v) return tree[id] % mod;
        int m = (l + r) >> 1;
        int get1 = get(id * 2, l, m, u, v);
        int get2 = get(id * 2 + 1, m + 1, r, u, v);
        return add(get1, get2);
    }
    void print(int n){
        for (int i=1; i<=n; i++) cout << get(1, 1, n, i, i) << " ";
        cout << endl;
    }
};

signed main(){
    //freopen("sample.inp", "r", stdin);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    F[1] = F[2] = 1;
    for (int i=3; i<maxN; i++){
        F[i] = add(F[i-1], F[i-2]);
        //F[i] = F[i - 1] + F[i-2];
        //cout << F[i] << " ";
    }
    for (int i=1; i<maxN; i++){
        //cout << Fp[i - 1] << " ";
        Fp[i] = add(Fp[i - 1], F[i]);
        //debug(Fp[i]);
    }
    int n, m;
    cin >> n >> m;
    for (int i=1; i<=n; i++) cin >> a[i];
    ST st;
    st.init(n);
    st.build(1, 1, n);
    while (m--){
        int x, y, z;
        cin >> x >> y >> z;
        if (x == 1){
            //cout << y << " " << z;
            st.update(1, 1, n, y, z, F[z - y + 1]);
            //cout << y << z << 1 << z - y + 1;
            //st.print(n);
            //cout << st.tree[1];
        }
        else{
            //st.print(n);
            cout << st.get(1, 1, n, y, z) % mod << "\n";
        }
    }
}