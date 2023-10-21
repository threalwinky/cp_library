#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int> st, org;
struct ST{

    void init(vector<int> v){
        st.assign(4 * v.size(), 0);
        org = v;
    }
    void build(int id, int l, int r){
        if (l == r){
            st[id] = org[l];
            return;
        }
        int m = (l + r) >> 1;
        build(id * 2, l, m);
        build(id * 2 + 1, m + 1, r);
        st[id] = st[id*2] + st[id*2+1];
    }
    void update(int id, int l, int r, int pos, int val){
        if (l > pos || r < pos) return;
        if (l >= pos && r <= pos){
            st[id] = val;
            return;
        }
        int m = (l + r) >> 1;
        update(id*2, l, m, pos, val);
        update(id*2+1, m+1, r, pos, val);
        st[id] = st[id*2] + st[id*2+1];
    }
    int get(int id, int l, int r, int u, int v){
        if (l > v || r < u) return 0;
        if (l >= u && r <= v) return st[id];
        int m = (l + r) >> 1;
        int get1 = get(id*2, l, m, u, v);
        int get2 = get(id*2+1, m+1, r, u, v);
        return get1 + get2;
    }
};

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    cin >> n >> q;
    vector<int> v(n+9, 0);
    for (int i=1; i<=n; i++){
        cin >> v[i];
    }
    ST st;
    st.init(v);
    st.build(1, 1, n);
    while (q--){
        int t, l, r;
        cin >> t >> l >> r;
        if (t == 1){
            st.update(1, 1, n, l, r);
        }
        else{
            cout << st.get(1, 1, n, l, r) << "\n";
        }
    }
}
