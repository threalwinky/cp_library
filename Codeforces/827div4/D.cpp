#include<bits/stdc++.h>
using namespace std;
int nt(int a,int b){
    int r;
    while(b)
        r = a % b, a = b, b = r;
    return (a == 1);
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	while (T--){
		int n;
		cin>>n;
		map<int, int> m;
		for (int i = 1; i<=n; i++){
			int x;
			cin>>x;
			m[x] = i;
		}
		int ans = -1;
		for (auto x : m){
			for (auto y : m){
				if (nt(x.first, y.first)) ans = max(ans, x.second + y.second);
			}
		}
		cout<<ans<<"\n";
	}
}
