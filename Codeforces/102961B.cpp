#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
const int MAX = 2e5 + 6;
int tmp[MAX];
void MrgSort(vector<int> &v, int l, int r){
	if (l < r){
		int m = l + (r - l)/2;
		MrgSort(v, l, m);
		MrgSort(v, m+1, r);
		int i = l, j = m + 1, k = 0;
		while (i <= m || j <= r)
			if ((v[i] < v[j] && i <= m && j <= r) || (j > r)) tmp[k++] = v[i++];
			else tmp[k++] = v[j++];
		for (int i = 0; i < k; i++) v[i+l] = tmp[i];
	}
}
int LowerBound(vector<int> v, int l, int r, int k){
	int old_l = l, old_r = r;
	while (l <= r){
		int m = l + (r - l)/2;
		if (v[m] >= k) r = m-1;
		else l = m+1;
	}
	if (l < old_l || l > old_r) return -1;
	return l;
}
int LowerDive(vector<int> v, int l, int r, int k){
	int old_l = l, old_r = r;
	while (l <= r){
		int m = l + (r - l)/2;
		if (v[m] > k) r = m-1;
		else l = m+1;
	}
	if (r < old_l || r > old_r) return -1;
	return r;
}
int n, m, k, ans = 0;
vector<int> a, b;
int main(){
	cin>>n>>m>>k;
	for (int i = 0; i<n; i++){
		int x; cin>>x;
		a.push_back(x);
	}
	for (int i = 0; i<m; i++){
		int x; cin>>x;
		b.push_back(x);
	}
	MrgSort(a, 0, n -1);
	MrgSort(b, 0, m -1);
	for (int i = n - 1; i >= 0; i--){
		int tmp1 = LowerBound(b, 0, b.size()-1, a[i] - k), tmp2 =  LowerDive(b, 0, b.size()-1, a[i] + k);
		if (tmp1 != -1 && abs(a[i] - b[tmp1] <= k)){
			ans++;
			b.erase(b.begin() + tmp1);
			continue;
		}
	}
	cout<<ans;
}