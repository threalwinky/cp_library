#include<iostream>
#include<map>
using namespace std;
int n, a[1050001], l, u;
int main(){
	cin>>n>>l>>u;
	for (int i = 0; i<n;i ++){
		cin>>a[i];
	}

	int ans = 0;
	for (int i = 0; i<n; i++){
		int j = i;
		int dem = 1;
		map<int, int> m;
		while (j < n){
			if (dem > u) break;
			cout<<a[i]<<" "<<a[j]<<endl;
			m[a[j]]++;
			if (m[a[j]] > 0 || dem <= u) dem++;
			if (dem >= l) ans++;
			j++;
		}
	}
	cout<<ans;
}