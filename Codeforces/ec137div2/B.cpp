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
		cin >> n;
		vector<int> v;
		for(int i = 1 ;i<n+1; i++){
			if (i % 2) cout << i << " ";
			else v.push_back(i);
		}
 
		for(auto it = v.rbegin(); it != v.rend(); ++it) {
			cout << *it << ' ';
		}
		cout << endl;
	}
}
