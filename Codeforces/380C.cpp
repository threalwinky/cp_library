/**
 *   author: winky
 *   created: 2023-05-31 10:57:44
**/

#include                    <bits/stdc++.h>
using namespace             std;
#define tri(a, b, c)        ((a) ? (b) : (c))
#define pb(x)               push_back(x)
#define fi                  first
#define se                  second
#define debug(x)            cerr<<"+Debug for "<<(#x)<<" : "<<x<<"\n";
#define endl                cout<<"\n";
//#define int               long long
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


string s;

struct Node{
    int opt;
    int o;
    int c;
    Node(int _opt, int _o, int _c){
        opt = _opt;
        o = _o;
        c = _c;
    }
};

struct ST{
    vector<Node> tree;
    void init(int n){
        tree.resize(n << 2, {0, 0, 0});
    }
    void build(int id, int l, int r){
        if (l == r){
            //cout << l - 1 << " " << s[l - 1] << "\n";
            if (s[l - 1] == '(') tree[id].o++;
            else tree[id].c++;
            //cout << tree[id].o;
            return;
        }
        int m = (l + r) >> 1;
        build(id * 2, l, m);
        build(id * 2 + 1, m + 1, r);
        tree[id].opt = min(tree[id * 2].o, tree[id * 2 + 1].c) + tree[id*2].opt + tree[id * 2 + 1].opt;
        tree[id].o = tree[id*2].o + tree[id*2+1].o - min(tree[id * 2].o, tree[id * 2 + 1].c);
        tree[id].c = tree[id*2].c + tree[id*2+1].c - min(tree[id * 2].o, tree[id * 2 + 1].c);
    }
    Node get(int id, int l, int r, int u, int v){
        if (l > v || r < u) return {0, 0, 0};
        if (l >= u && r <= v){
            return tree[id];
        }
        int m = (l + r) >> 1;
        Node get1 = get(id * 2, l , m, u, v);
        Node get2 = get(id * 2 + 1, m + 1, r, u, v);
        int opt = min(get1.o, get2.c) + get1.opt + get2.opt;
        int o = get1.o + get2.o - min(get1.o, get2.c);
        int c = get1.c + get2.c - min(get1.o, get2.c);
        return {opt, o, c};
    }
};

signed main(){
    IO(3);//1 for INP, 2 for INP and OUT, 3 for stdio
    cin >> s;
    ST st;
    st.init(s.length());
    st.build(1, 1, s.length());
    int q;
    cin >> q;
    while (q--){
        int x, y;
        cin >> x >> y;
        cout << st.get(1, 1, s.length(), x, y).opt * 2 <<"\n";
    }
    //cout << st.get(1, 1, s.length(), 2, 2).o;
}