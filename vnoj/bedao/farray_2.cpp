#include<iostream>
using namespace std;
#define int long long
const long long MAX = 1e5, inf = 1e9,MOD = 1058374681;
void update(int st[], int id, int l, int r, int i, int val){
	if (i < l || i > r) return;
	if (l == r){
		st[id] = val;
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
    return (get1+get2)%MOD;
}
int a[MAX], st[4*MAX], n,q, f[MAX];
main(){
	ios::sync_with_stdio(0);cin.tie(0);
	cin>>n>>q;
	f[0] = 0;
	f[1] = 1;
	for (int i = 2; i<=MAX; i++){
		f[i] = (f[i-1] + 2*f[i-2]%MOD)%MOD;
	}
	while (q--){
		int type, l, r;
		cin>>type>>l>>r;
		if (type == 1){
			int val;
			cin>>val;
			for (int i = l; i<=r; i++){
				update(st, 1, 1, n, i, f[val + i - 1]);
			}
		}
		else cout<<get(st, 1, 1, n, l, r)<<"\n";
		
	}
	
}