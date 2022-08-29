#include<iostream>
using namespace std;
const int MAX = 4e6 + 5, inf = 1e9;
int st[MAX], lazy[MAX];
void fix(int id, int l, int r){
	if (!lazy[id]) return;
	st[id] += lazy[id];
	if (l != r){
		lazy[id*2] += lazy[id];
		lazy[id*2+1] += lazy[id];
	}
	lazy[id]=0;
}
void update(int id, int l, int r, int u, int v, int val){
	fix(id, l, r);
	if (l > v || r < u) return;
	if (l >= u && r <= v) {
        lazy[id] += val;
        fix(id, l, r);
        return;
    }
	int m = l + (r - l)/2;
	update(id*2, l, m, u, v, val);
	update(id*2+1, m+1, r, u, v, val);
	st[id] = max(st[id*2], st[id*2+1]);
}
int get(int id, int l, int r, int u, int v){
	fix(id, l, r);
	if (l > v || r < u) return -inf;
	if (l >= u && r <= v) return st[id];
	int m = l + (r - l)/2;
	int get1 = get(id*2, l, m, u, v);
	int get2 = get(id*2+1, m+1, r, u, v);
	return max(get1, get2);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, q; cin>>n>>q;
	for (int i = 0; i<q; i++){
		int l, r, val, type;
		cin>>type;
		if (!type){
			cin>>l>>r>>val;
			update(1, 1, n, l, r, val);
		}
		else{
			cin>>l>>r;
			cout<<get(1, 1, n, l, r)<<endl;
		}
	}
}