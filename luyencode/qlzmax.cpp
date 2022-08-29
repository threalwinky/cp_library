#include<iostream>
using namespace std;
const int MAX = 1e6, inf = 1e9 + 11;

void build(int a[], int st[], int id, int l, int r){
	if (l == r){
		st[id] = a[l];
		return;
	}
	int m = l + (r - l)/2;
	build(a, st, id*2, l, m);
	build(a, st, id*2+1, m+1, r);
	st[id] = max(st[id*2], st[id*2+1]);
}
void update(int st[], int id, int l, int r, int i, int val){
	if (l > i || r < i) return;
	if (l == r){
		st[id] = val;
		return;
	}
	int m = l + (r - l)/2;
	update(st, id*2, l, m, i, val);
	update(st, id*2+1, m+1, r, i, val);
	st[id] = max(st[id*2], st[id*2+1]);
}
int get(int st[], int id, int l, int r, int u, int v){
	if (l > v || r < u)
		return -inf;
	if (l >= u && r <= v){
		return st[id];
	}
	int m = l + (r - l)/2;
	int get1 = get(st, id*2, l, m, u, v);
	int get2 = get(st, id*2+1, m+1, r, u, v);
	return max(get1, get2);
}
void fix(int st[], int lazy[], int id, int l, int r){
	if (!lazy[id]) return;
	st[id] += lazy[id];
	if (l != r){
		lazy[2*id] += lazy[id];
		lazy[2*id+1] += lazy[id];
	}
	lazy[id] = 0;
}
void updategr(int st[], int lazy[], int id, int l, int r, int u, int v, int val){
	fix(st, lazy, id, l, r);
	if (l > v || r < u) return;
	if (l >= u && r <= v){
		lazy[id] += val;
		fix(st, lazy, id, l, r);
		return;
	}
	int m = l + (r - l)/2;
	updategr(st, lazy, id*2, l, m, u, v, val);
	updategr(st, lazy, id*2+1, m+1, r, u, v, val);
	st[id] = max(st[id*2], st[id*2+1]);
}
int getwlazy(int st[], int lazy[], int id, int l, int r, int u, int v){
	fix(st, lazy, id, l, r);
	if (l > v || r < u) return -inf;
	if (l >= u && r <= v){
		return st[id];
	}
	int m = l + (r - l)/2;
	int get1 = getwlazy(st, lazy, id*2, l, m, u, v);
	int get2 = getwlazy(st, lazy, id*2+1, m+1, r, u, v);
	return max(get1, get2);
}
int a[MAX], st[4*MAX], lazy[4*MAX];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, q;
	cin>>n>>q;
	build(a, st, 1, 1, n);
	while (q--){
		int type;
		cin>>type;
		if (type == 0){
			int l, r, val;
			cin>>l>>r>>val;
			updategr(st, lazy, 1, 1, n, l, r, val);
		}
		else{
			int l, r;
			cin>>l>>r;
			cout<<getwlazy(st,lazy,1,1,n,l, r)<<endl;
		}
	}
}