#include<iostream>
using namespace std;
const int MAX = 1e5, inf = 1e9;

void build(int a[], int st[], int id, int l, int r){
	if (l == r){
		st[id] = a[l];
		return;
	}
	int m = l + (r - l)/2;
	build(a, st, id*2, l, m);
	build(a, st, id*2+1, m+1, r);
	st[id] = st[id*2] + st[id*2+1];
}
void update(int st[], int id, int l, int r, int i, int val){
	if (i < l || i > r) return;
	if (l == r){
		st[id] += val;
		return;
	}
	int m = l + (r - l)/2;
	update(st, id*2, l , m, i ,val);
	update(st, id*2+1, m+1, r, i, val);
	st[id] = st[id*2] + st[id*2+1];
}
int get(int st[], int id, int l, int r, int u, int v){
    if (l >  v || r <  u) return 0;
    if (l >= u && r <= v) return st[id];
    int m = l + (r - l)/2;
    int get1 = get(st,id*2, l, m, u, v);
    int get2 = get(st,id*2+1, m+1, r, u, v);
    return get1+get2;
}
int a[MAX], st[4*MAX], n,q;
int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	cin>>n>>q;
	for (int i = 1; i<=n; i++){
		cin>>a[i];
	}
	build(a, st, 1,1, n);
	
	while (q--){
		int type, l, r;
		cin>>type>>l>>r;
		if (type == 1){
			update(st, 1, 1, n, l, r);
		}
		else cout<<get(st, 1, 1, n, l, r)<<" ";
	}
	/* for (int i = 1; i<=n; i++)
		cout<<get(st, 1, 1, n, i, i)<<" "; */
}
/* 5 3
2 -1 5 3 -3
2 1 4
1 3 2
2 2 5 */