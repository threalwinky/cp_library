#include<iostream>
#include<vector>
using namespace std;
int main(){
	int T; cin>>T;
	while (T--){
	int n, ans = 0;
	cin>>n;
	int m = n;
	vector<pair<long long, int>> v;
	for (int i = 1; i<=m; i++){
		int x; cin>>x;
		if (x < i)
			v.push_back({x, i});
		else n--;
	}
	
	for (int i = 0; i<n-1; i++){
		int j = n-1;
		while (j > i){
			if (v[i].second < v[j].first){
					ans++;
					
				}
			j--;
		}
	}
	cout<<ans<<'\n';
	}
}