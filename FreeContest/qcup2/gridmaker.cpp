#include<iostream>
using namespace std;
int a[1001][1001], b[1001], c[1001];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	cin>>n>>m;
	for (int i = 0; i<n; i++) cin>>b[i];
	for (int i = 0; i<m; i++) cin>>c[i];
	for (int i = 0; i<n; i++){
		if (i == n-1){
			for (int j = 0; j<m; j++) cout<<c[j]<<" ";
		}
		else{
		for (int j = 0; j<m-1; j++){
				cout<<1<<" ";
				c[j] -=1;
				b[i] -=1;
				if (j == m-2) cout<<b[i]<<" ";
		}
		cout<<endl;
		}
	}
}