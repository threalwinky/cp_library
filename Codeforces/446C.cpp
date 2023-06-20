/**
 *   author: winky
 *   created: 2023-05-31 13:08:17
**/

#include                    <bits/stdc++.h>
using namespace             std;
#define tri(a, b, c)        ((a) ? (b) : (c))
#define pb(x)               push_back(x)
#define fi                  first
#define se                  second
#define debug(x)            cerr<<"+Debug for "<<(#x)<<" : "<<x<<"\n";
#define endl                cout<<"\n";
#define int               long long
typedef pair<int, int>      ii;
typedef long long           ll;
const int maxN =            3e5;
const int mod =             1e9 + 9;
const int inf =             INT_MAX;
const double PI =           3.14159265358979;
const auto INP_FILE =       "sample.inp";
const auto OUT_FILE =       "sample.out";
void IO(short choice){      if (choice == 1) freopen(INP_FILE, "r", stdin);
else                        if (choice == 2){freopen(INP_FILE, "r", stdin); freopen(OUT_FILE, "w", stdout);}
else                        if (choice == 3) ios::sync_with_stdio(false);cin.tie(nullptr);}
/*----- ----- ----- ----- ----- ----- ----- ----- ----- -----*/

int F[maxN], Fp[maxN], a[maxN];

int add(int a, int b){
    return (a%mod + b%mod)%mod;
}

int sub(int a, int b){
    return ((a%mod-b%mod)+mod)%mod;
}

struct ST{
    vector<int> tree;
    vector<pair<int, int>> lazy;
    pair<int, int> o = {0, 0};
    void init(int n){
        tree.resize((n << 2), 0);
        lazy.resize((n << 2), o);
    }
    void build(int id, int l, int r){
        if (l == r) {
            tree[id] = a[l];
            return;
        }
        int m = (l + r) >> 1;
        build(id * 2, l, m);
        build(id * 2 + 1, m + 1, r);
        tree[id] = tree[id * 2] + tree[id * 2 + 1];
    }
    void fix(int id, int l, int r){
        if (lazy[id] == o){ return; }
        if (l != r && (lazy[id*2] != o || lazy[id*2+1] != o)){
            int m = (l + r) >> 1;
            fix(id*2, l, m);
            fix(id*2+1, m+1, r);
        }
        int f = lazy[id].fi;
        int s = lazy[id].se;
        //cout << l << " " << r << " " << f << " " << s << "\n";
        tree[id] = add(tree[id], sub(Fp[s], Fp[f - 1]));
        if (l != r){
            int m = (l + r) >> 1;
            lazy[id * 2] = {f, f + m - l};
            lazy[id * 2 + 1] = {f + m - l + 1, s};
        }
        lazy[id] = o;
    }
    void update(int id, int l, int r, int u, int v, int s, int e){
        fix(id, l, r);
        if (l  > v || r < u) return;
        if (l >= u && r <= v){
            fix(id, l, r);
            lazy[id] = {s + l - u, e - (v - r)};
            //debug(lazy[id].fi);
            //debug(lazy[id].se);
            fix(id, l, r);
            return;
        }
        int m = (l + r) >> 1;
        update(id * 2, l, m, u, v, s, e);
        update(id * 2 + 1, m + 1, r, u, v, s, e);
        tree[id] = add(tree[id * 2], tree[id*2+1]);
    }
    int get(int id, int l, int r, int u, int v){
        fix(id, l, r);
        if (l > v || r < u) return 0;
        if (l >= u && r <= v){
            return tree[id];
        }
        int m = (l + r) >> 1;
        return get(id * 2, l, m, u, v) + get(id * 2 + 1, m + 1, r, u, v);
    }
    void print(int n){
        for (int i=1; i<=n; i++){ cout << get(1, 1, n, i, i) << " "; }
    }
};


signed main(){
    IO(3);//1 for INP, 2 for INP and OUT, 3 for stdio
    F[1] = F[2] = 1;
    for (int i=3; i<=maxN; i++){
        F[i] = add(F[i-1], F[i-2]);
        //F[i] = F[i - 1] + F[i-2];
        //cout << F[i] << " ";
    }
    for (int i=1; i<=maxN; i++){
        //cout << Fp[i - 1] << " ";
        Fp[i] = add(Fp[i - 1], F[i]);
        //debug(Fp[i]);
    }
    int n, m;
    cin >> n >> m;
    for (int i=1; i<=n; i++){
        cin >> a[i];
    }
    ST st;
    st.init(n);
    st.build(1, 1, n);
    //cout << st.tree[1];
    //st.update(1, 1, n, 1, 4, 1, 4);
    //st.update(1, 1, n, 2, 4, 1, 3);
    //st.print(4);
    //cout << st.get(1, 1, n, 1, 1);
    //st.update(1, 1, n, 1, 4);

    while (m--){
        int x, y, z;
        cin >> x >> y >> z;
        if (x == 1){    
            //cout << y << " " << z;
            st.update(1, 1, n, y, z, 1, (z - y) + 1);
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