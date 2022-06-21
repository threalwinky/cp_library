#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n; int a[n];
	for (int i = 0; i< n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int res = a[0] * a[1] * a[n - 1] < a[n - 1] * a[n - 2] * a[n - 3] ? a[n - 1] * a[n - 2] * a[n - 3] : a[0] * a[1] * a[n - 1];
	cout<<res; 
	//for (int i = 1; i<= n;i++){
	//	cout<<arr[i];
	//}
}
