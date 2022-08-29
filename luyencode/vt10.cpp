#include<bits/stdc++.h>
using namespace std;
int main (){
	int n;cin>>n;int arr[n];
	for (int i = 1; i<=n;i++) cin>>arr[i];
	sort(arr+1,arr+n+1);
	for (int i = n; i>=1;i--) cout<<arr[i]<<" ";
}
