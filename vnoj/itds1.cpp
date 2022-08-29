#include<bits/stdc++.h>
using namespace std;
const int MAX = 1e5 + 5, inf = 1e9;
int a[MAX];
multiset<int> st[4*MAX];
void build(int a[], multiset<int> st[], int id, int l, int r){
	if (l == r){
		st[id].insert(a[l]);
		return;
	}
	int m = l + (r - l)/2;
	build(a, st, id*2, l, m);
	build(a, st, id*2+1, m+1, r);
	st[id] = st[2 * id + 1];
    for (auto x : st[2 * id]) st[id].insert(x);
}
void update(int id, int l, int r, int i, int old, int val) {
    if (l > i || r < i) return;
    if (l == r) {
        st[id].clear();
        st[id].insert(val);
        return;
    }
    int mid = l + r >> 1;
    update(2 * id, l, mid, i, old, val);
    update(2 * id + 1, mid + 1, r, i, old, val);
    st[id].erase(st[id].find(old));
    st[id].insert(val);
}
int get(int id, int l, int r, int u, int v, int k){
	if (l > v || r <u) return 0;
	if (l >= u && r <= v){
		auto it = st[id].upper_bound(k);
		if (it == st[id].end()) return 0;
		return distance(st[id].find(*it), st[id].end());
	}
	int m = l + (r - l)/2;
	int get1 = get(id*2, l, m, u, v, k);
	int get2 = get(id*2+1, m+1, r, u, v, k);
	return get1 + get2;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, q;
	cin>>n;
	for (int i = 1; i<=n; i++){
		cin>>a[i];
	}
	build(a,st, 1, 1, n);
	cin>>q;
	while (q--){
		int type, l, r, val;
		cin>>type>>l>>r;
		if (type == 0){
			update(1, 1, n, l, a[l], r);
			a[l] = r;
		}
		else{
			cin>>val;
			int tmp = get(1,1,n,l, r, val);
			cout<<((tmp == inf) ? -1 : tmp)<<"\n";
		}
	}
}