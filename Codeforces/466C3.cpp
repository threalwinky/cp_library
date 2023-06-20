#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN = 4e5;
const int mod = 1e9 + 9;

inline int add(int a, int b){return (a%mod+b%mod)%mod;}
inline int sub(int a, int b){return ((a%mod-b%mod)+mod)%mod;}

int a[maxN], F[maxN], Fp[maxN];

struct ST{
    vector<int> tree;
    vector<pair<int, int>> lazy;
    pair<int, int> o = {0, 0};
    void init(int n){
        tree.resize(n<<2, 0);
        lazy.resize(n<<2, o);
    }
    void build(int id, int l, int r){
        if (l==r){
            tree[id]=a[l];
            return;
        }
        int m = (l+r)>>1;
        build(id*2,l,m);
        build(id*2+1,m+1,r);
        tree[id]=add(tree[id*2],tree[id*2+1]);
    }
    void fix(int id, int l, int r){
        if (lazy[id] == o){ return; }
        if (l != r && lazy[id*2] != o || lazy[id*2+1] != o){
            int m = (l + r) >> 1;
            fix(id*2, l, m);
            fix(id*2+1, m+1, r);
        }
        int f = lazy[id].first;
        int s = lazy[id].second;
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
        if (l>v||r<u) return;
        if (l>=u&&r<=v){
            //cout << l << " " << r << " " << s+l-u << " " << e-(v-r) << "\n";
            fix(id, l, r);
            lazy[id]={s+l-u,e-(v-r)};
            fix(id, l, r);
            return;
        }
        int m=(l+r)>>1;
        update(id*2,l,m,u,v,s,e);
        update(id*+1,m+1,r,u,v,s,e);
    }
    int get(int id, int l, int r, int u, int v){
        fix(id, l, r);
        if (l>v||r<u) return 0;
        if (l>=u&&r<=v) return tree[id];
        int m=(l+r)>>1;
        return add(get(id*2,l,m,u,v), get(id*2+1,m+1,r,u,v));
    }
    void print(int n){
        for (int i=1; i<=n; i++) cout<<get(1,1,n,i,i)<<" ";
    }
};



signed main(){
    freopen("sample.inp", "r", stdin);
    F[1]=F[2]=1;
    for (int i=3;i<=maxN;i++) F[i]=F[i-1]+F[i-2];
    for (int i=1;i<=maxN;i++) Fp[i]=Fp[i-1]+F[i];
    int n,  m;
    cin >> n >> m;
    for (int i=1; i <= n; i++){
        cin >> a[i];
    }
    ST st;
    st.init(n);
    st.build(1,1,n);
    //st.update(1,1,n,1,4,1,4);
    st.update(1,1,n,2,4,1,3);
    st.print(n);
}