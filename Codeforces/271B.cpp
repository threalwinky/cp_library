#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
const int MAX = 1e5 + 5000;
bool check[MAX*10];
vector<int> pn;
void sieve(int n){
	for (int i = 2; i<=n; i++){
		if (!check[i]){
			pn.push_back(i);
			for (int j = 2*i; j <= n; j+=i)
				check[j] = 1;
		}
	}
}
int LowerBound(vector<int> pn, int l, int r, int val){
	while (l <= r){
		int m = l + (r - l)/2;
		if (pn[m] == val) return pn[m];
		if (pn[m] > val) r = m - 1;
		else l = m + 1;
	}
	return pn[l];
}
int n, m, a[1001][1001], col[1001], row[1001];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	sieve(MAX);
	//for (auto x:pn) cout<<x<<" ";
	cin>>n>>m;
	for (int i = 0; i<n; i++){
		for (int j = 0; j<m; j++){
			cin>>a[i][j];
			int tmp = LowerBound(pn, 0, pn.size() - 1, a[i][j]) - a[i][j];
			col[j] += tmp;
			row[i] += tmp;
		}
	}
	int min1 = 1e9, min2= 1e9;
	/* for (int i = 0; i<m; i++){
		cout<<col[i]<<" ";
	}
	for (int i = 0; i<n; i++){
		cout<<row[i]<<" ";
	} */
	for (int i = 0; i<m; i++){
		min1 = min(min1, col[i]);
	}
	for (int i = 0; i<n; i++){
		min2 = min(min2, row[i]);
	}
	cout<<min(min1, min2);
}