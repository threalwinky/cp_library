#include<iostream>
using namespace std;
#define int long long
const int MAX = 1e5;
void update(long long bit[], int n, int pos, int val){
	while (pos <= n){
		bit[pos] += val;
		pos += (pos & (-pos));
	}
}
long long get(long long bit[], int n, int pos){
	int ans = 0;
	while (pos > 0){
		ans += bit[pos];
		pos -= (pos & (-pos));
	}
	return ans;
}
void update_range(long long bit1[], long long bit2[], int n, int l, int r, int val){
	update(bit1, n, l, (n - l + 1)*val);
	update(bit1, n, r+1, -(n - r)*val);
	update(bit2, n, l, val);
	update(bit2, n, r + 1, -val);
}
long long get_range(long long bit1[], long long bit2[], int n, int l, int r){
	long long l_val = get(bit1, n, l) - get(bit2, n, l)*(n-l);
	long long r_val = get(bit1, n, r) - get(bit2, n, r)*(n-r);
	return r_val - l_val;
}
long long bit1[MAX], bit2[MAX];
main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,q; cin>>n>>q;
	for (int i = 1; i<=n ;i++){
		int x; cin>>x;
		update(bit1, n, i, x);
	}
	while (q--){
		int type, l, r;
		cin>>type>>l>>r;
		if (type == 1){
			int val;
			cin>>val;
			update_range(bit1, bit2, n, l, r, val);
		}
		else cout<<get_range(bit1, bit2, n, l-1, r)<<"\n";
	}
}