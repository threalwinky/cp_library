#include<iostream>
using namespace std;
const int MAX = 1e5 + 5, inf = 1e9;
void build(int a[], int st[], int id, int l, int r){
	if (l == r) {
		st[id] = a[l];
		return;
	}
	int m = l + (r-l)/2;
	build(a, st, id*2, l, m);
	build(a, st, id*2+1, m+1, r);
	st[id] = max(st[id*2], st[id*2+1]);
}
void update(int st[], int id, int l, int r, int pos, int val){
	if (l > pos || r < pos) return;
	if (l == r){
		st[id] = val;
		return;
	}
	int m = l + (r - l)/2;
	update(st, id*2, l, m, pos, val);
	update(st, id*2+1, m+1, r, pos, val);
	st[id] = max(st[id*2], st[id*2+1]);
}
int get(int st[], int id, int l, int r, int u, int v){
	if (l > v || r < u) return -inf;
	if (l >= u && r <= v){
		return st[id];
	}
	int m = l + (r - l)/2;
	int get1 = get(st, id*2, l, m, u,v);
	int get2 = get(st, id*2+1, m+1, r, u,v);
	return max(get1, get2);
}
int a[MAX], st[4*MAX];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	for (int i = 1; i<=n; i++){
		cin>>a[i];
	}
	build(a, st, 1, 1, n);
	int q; cin>>q;
	for (int i = 0; i<q; i++){
		int type, a, b;
		cin>>type>>a>>b;
		if (type == 1) update(st, 1, 1, n, a, b);
		else cout<<get(st, 1, 1, n, a, b)<<"\n";
	}
}