#include<bits/stdc++.h>
using namespace std;
int sol(int n){
	return n*(n - 1)*2 + n * (n - 1);
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		for (int i = 0; i<n; i++){
			int x;
			cin>>x;
		}
		int x = 10 - n;
		cout<<sol(x)<<"\n";
	}
}
