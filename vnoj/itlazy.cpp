#include<iostream>
#include<cstring>
using namespace std;
#define int long long
const int MAX = 1e6 + 5, inf = 1e9;

int lz[4*MAX];
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
void lazy(int st[], int id, int l, int r){
	if (!lz[id]) return;
	st[id] += lz[id];
	if (l != r){
		lz[id*2] += lz[id];
		lz[id*2+1] += lz[id];
	}
	lz[id] = 0;
}
void update(int st[], int id, int l, int r, int u, int v, int val){
	lazy(st, id, l, r);
	if (l > v || r < u) return;
	if (l >= u && r <= v){
		lz[id] += val;
		lazy(st, id, l, r);
		return;
	}
	int m = l + (r - l)/2;
	update(st, id*2, l, m, u, v, val);
	update(st, id*2+1, m+1, r, u ,v , val);
	st[id] = max(st[id*2], st[id*2+1]);
}
int get(int st[], int id, int l, int r, int u, int v){
	lazy(st, id, l, r);
	if (l > v || r < u) return -inf;
	if (l >= u && r <= v) return st[id];
	int m = l + (r - l)/2;
	int get1 = get(st, id*2, l, m, u,v);
	int get2 = get(st, id*2+1, m+1, r, u,v);
	return max(get1, get2);
}
int a[MAX], st[4*MAX];
main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	memset(lz, 0, sizeof(lz));
	int n;cin>>n;
	for (int i = 1; i<=n; i++){
		cin>>a[i];
	}
	build(a, st, 1, 1, n);
	int q; cin>>q;
	while (q--){
		int type, l, r, val;
		cin>>type;
		if (type == 1){
			cin>>l>>r>>val;
			update(st, 1, 1, n, l, r, val);
		}
		else{
			cin>>l>>r;
			cout<<get(st, 1, 1, n, l, r)<<"\n";
		}
	}
}