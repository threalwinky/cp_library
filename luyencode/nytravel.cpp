#include<bits/stdc++.h>
using namespace std;
#define NMAX 100001
void FASTINPUT(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
typedef long long ll;
typedef unsigned long long ull;
vector<int> v[NMAX];
bool check[NMAX];
int tplt[NMAX];
int n, m, temp;
void inp(){
	cin>>n>>m;
	for (int i = 0; i<m; i++){
		int x, y;
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
}
void dfs(int i){
	check[i] = 1;
	temp++;
	for (auto x:v[i]){
		if (!check[x]){
			dfs(x);
		}
	}
}
void out(){
	memset(check, 0 , NMAX);
	dfs(1);
	int res = temp, maxc = 0;
	for (int i = 2; i<=n; i++){
		if (!check[i]){
			temp = 0;
			dfs(i);
			
			maxc = max(temp, maxc);
		}
	}
	cout<<res + maxc;
}
int main(){
    FASTINPUT();
    inp();
    out();
}