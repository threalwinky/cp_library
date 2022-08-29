#include<iostream>
using namespace std;
const int MAX = 1e5;
struct Node{
	bool lazy;
	int on, off;
};
Node st[MAX*4];
void fix(int id, int l, int r){
	if (!st[id].lazy) return;
	st[id].on = !st[id].off;
	st[id].off = !st[id].on;
	if (l != r){
		st[id*2].lazy = 1;
		st[id*2+1].lazy = 1;
	}
	st[id].lazy = 0;
}
void update(int id, int l, int r, int u, int v){
	fix(id, l, r);
	if (l > v || r < u) return;
	if (l >= u && r <= v){
		st[id].lazy = 1;
		fix(id, l, r);
		return;
	}
	int m = l + (r - l)/2;
	update(id*2, l, m, u, v);
	update(id*2+1, m+1, r, u, v);
	st[id].on = st[id*2].on + st[id*2+1].on;
	st[id].off = st[id*2].off + st[id*2+1].off;
}
int get(int id, int l, int r, int u, int v){
	fix(id, l, r);
	if (l > v || r < u) return 0;
	if (l >= u && r <= v){
		return st[id].on;
	}
	int m = l + (r - l)/2;
	return get(id*2, l, m, u, v) + get(id*2+1, m+1, r, u, v);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, q;
	cin>>n>>q;
	while (q--){
		int type, l, r;
		cin>>type>>l>>r;
		if (type == 0) update(1, 1, n, l, r);
		else cout<<get(1, 1, n, l, r)<<"\n";
	}
}