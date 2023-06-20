
/**
 *   author: winky
 *   created: 2023-05-29 17:54:49
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
const int mod =             1e9 + 7;
const int inf =             INT_MAX;
const double PI =           3.14159265358979;
const auto INP_FILE =       "sample.inp";
const auto OUT_FILE =       "sample.out";
void IO(short choice){      if (choice == 1) freopen(INP_FILE, "r", stdin);
else                        if (choice == 2){freopen(INP_FILE, "r", stdin); freopen(OUT_FILE, "w", stdout);}
else                        if (choice == 3) ios::sync_with_stdio(false);cin.tie(nullptr);}
/*----- ----- ----- ----- ----- ----- ----- ----- ----- -----*/

vector<int> a(maxN), b(maxN);
pair<int, int> o = {0, 0};
struct ST{
    vector<int> tree;
    vector<pair<int, int>> lazy;
    void init(int n){
        tree.resize(4 * (n + 1));
        lazy.resize(4 * (n + 1), o);
    }
    void build(int id, int l, int r){
        if (l == r){ tree[id] = -l; return; }
        int m = (l + r) >> 1;
        build(id * 2, l, m);
        build(id * 2 + 1, m + 1, r);
    }
    void print(){
        for (auto x : tree) cout << x;
    }
    void print_lazy(){
        for (auto x : lazy) cout << x.first << " " << x.second << "\n";
    }
    void fix(int id, int l, int r){
        if (lazy[id] == o) return;
        int fi = lazy[id].first;
        int se = fi + lazy[id].second - 1;
        tree[id] = (se * (se + 1)/2) - (fi * (fi - 1)/2);
        if (l != r){
            int m = (l + r) >> 1;
            lazy[id * 2] = {fi, m - l + 1};
            lazy[id * 2 + 1] = {fi + m - l + 1, r - m};
        }
        lazy[id] = o;
    }
    void update(int id, int l, int r, int u, int v, int s,int len){
        fix(id, l, r);
        if (l > v || r < u) return;
        if (l >= u && r <= v){
            lazy[id] = {s + l - u, r - l + 1};
            fix(id, l, r);
            return;
        }
        int m = (l + r) >> 1;
        update(id*2, l, m, u, v, s, len);
        update(id*2+1, m + 1, r, u, v, s, len);
    }
    int get(int id, int l, int r, int pos){
        //cout << l << " " << r <<"\n";
        fix(id, l, r);
        if (l > pos || r < pos) return 0;
        if (l == r) return tree[id];
        int m = (l + r) >> 1;
        return get(id * 2, l, m, pos) + get(id * 2 + 1, m + 1, r, pos);
    }
    void print_element(int n){
        for (int i=1; i<=n; i++){
            cout << get(1, 1, n, i) << " ";
        }
    }
};
signed main(){
    IO(3);//1 for INP, 2 for INP and OUT, 3 for stdio
    int n, m;
    cin >> n >> m;
    for (int i=1; i<=n; i++){ cin >> a[i]; }
    for (int i=1; i<=n; i++){ cin >> b[i]; }
    ST st;
    st.init(n);
    st.build(1, 1, n);
    //st.print();
    //cout << "\n";
    //st.print_element(n);
    while (m--){
        int x, ar, br, cr;
        cin >> x;
        if (x == 2){
            cin >> ar;
            int get = st.get(1, 1, n, ar);
            if (get < 0){
                cout << b[-get] << "\n";
            }
            else cout << a[get] << "\n";
        }
        else{
            cin >> ar >> br >> cr;
            st.update(1, 1, n, br, br + cr - 1, ar, cr);
            //cout << cr << " " << cr + br - 1 << " " << ar << " " << br << "\n";
            //st.print_element(n);
            //cout << endl;
        }
    }
}