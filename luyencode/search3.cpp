#include<bits/stdc++.h>
using namespace std;
#define NMAX 100001
int n,m;
map<int, int> mp;
void inp(){
	cin>>n>>m;
	for (int i = 1; i<=n; i++){
		int x; cin>>x;
		mp.insert({x,i});
		if (mp[x] == 0){
		}
	}
}
void out(){
	for (int i = 0; i<m; i++){
		int x; cin>>x;
		if (mp[x] != 0) cout<<mp[x]<<" ";
		else cout<<0;
	}
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    inp();
    out();
}