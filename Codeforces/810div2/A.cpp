#include<iostream>
using namespace std;

int main(){

	int T; cin>>T;
	while (T--){
		int n, a[100001];
		cin>>n;
		for (int i = 1; i<=n; i++) a[i] = i;
		for (int i = 1; i<n; i++) swap(a[i], a[i + 1]);
		for (int i = 1; i<=n; i++) cout<<a[i]<<" ";
		cout<<"\n";
	}
}