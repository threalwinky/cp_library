#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<pair<int, int>> v[100001];
int check[100001];
void dfs(int u){
	for (auto x:v[u]){
		if (check[x.first] == 0){
			if (x.second % 2 ==0)
				check[x.first] = check[u];
			else check[x.first] = (check[u] == 1) ? 2 : 1;
			dfs(x.first);
		}
	}
}
int main(){
	cin>>n;
	for (int i = 0; i<n-1; i++){
		int x, y, w;
		cin>>x>>y>>w;
		v[x].push_back({y, w});
		v[y].push_back({x, w});
	}
	check[1] = 1;
	dfs(1);
	for (int i = 1; i<=n; i++){
		cout<<((check[i] == 1)?1:0)<<" ";
	}
}