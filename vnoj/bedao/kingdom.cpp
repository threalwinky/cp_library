#include<iostream>
#include<cstring>
#include<vector>
#include<set>
using namespace std;
vector<pair<int, int>> v[100001];
int n;
bool check[10001];
int adj[10001];
pair<int, int> tmp[10001];
bool flag1 = 1;
int loang = 0;
void dfs(int u, int i){
	loang++;
	check[u] = 1;
	for (auto x:v[u]){
		if (!check[x.first] && x.first != i) {
			if (x.second == 1) 
			dfs(x.first, i);
			else {
				flag1 = 0;
				return;
			}
		}
	}
}
bool sol(int i){
	check[i] = 1;
	for (int j = 1; j<=n; j++){
		memset(check, 0, 10001);
		if (!check[j] && j != i){
			loang = 0;
			dfs(j, i);
		}
		if (flag1 && loang > 1) return true;
		else flag1 = 1;
	}
	return false;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n;
	for (int i = 1; i<=n-1; i++){
		int x, y;
		cin>>x>>y;
		tmp[i] = {x, y};
	}
	for (int i = 1; i<=n; i++){
		cin>>adj[i];
	}
	for (int i = 1; i<=n - 1; i++){
		int x = tmp[i].first, y = tmp[i].second;
		v[x].push_back({y, ((adj[x] == adj[y]) ? (1) : (0)) } );
		v[y].push_back({x, ((adj[x] == adj[y]) ? (1) : (0)) } );
	}
	bool flag = 0;
	set<int> s;
	for (int i = 1; i<=n; i++){
		if (sol(i)){
			flag = 1;
			s.insert(i);
		}
	}
	if (flag) {
		cout<<"YES\n";
		for (auto x:s) cout<<x<<"\n";
	}
	else cout<<"NO";
}