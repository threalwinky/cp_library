#include<iostream>
#include<map>
using namespace std;
int a[200005];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int T; cin>>T;
	while (T--){
		map<int, int> m;
		int n, dem = 0;
		cin>>n;
		for (int i = 0; i<n; i++){
			cin>>a[i];
			
		}
		for (int i = n - 1; i>=0; i--){
			m[a[i]]++;
			
			if (m[a[i]] > 1)
			{
				break;
			}
			dem++;
		}
		if (dem == 0) cout<<dem;
		else cout<<n-dem;
		cout<<endl;
	}
}