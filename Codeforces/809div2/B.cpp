#include<iostream>
#include<vector>
#include<map>
#include<cstringa>
using namespace std;

int main(){
	int T; cin>>T;
	while (T--){
	int n, arr[100001], nt[100001], tmp[100001];
	memset(tmp, 0, 100001*4);
	map<int, int> m;
	cin>>n;
	for (int i = 0; i<n; i++){
		arr[i] = i;
		nt[i] = i;
	}
	for (int i = 0; i<n; i++){
		int x; cin>>x;
		if (m[x] == 0|| (i-arr[x])%2 != 0){
			arr[x] = i;
			m[x]++;
		}
	}
	for (auto x:m){
		tmp[x.first] = x.second;
	}
	for (int i = 1; i<=n; i++)cout<<tmp[i]<<" ";
	cout<<endl;
	}
}