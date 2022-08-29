#include<iostream>
#include<map>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	map<long long, int> m;
	long long n, k;cin>>n>>k;
	for (int i = 0; i<n; i++){
		long long x;
		cin>>x;
		m[x]++;
		if (m[x] >= k)
		{
			m[x] = 0;
			m[x+1]++;
		}
	}
	int ans = 0;
	for (auto x:m){
		ans+=x.second;
	}
	cout<<ans;
}