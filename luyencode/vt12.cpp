#include<bits/stdc++.h>
using namespace std;
int main (){
	long int n;cin>>n;int arr[n];
	for (int i = 1; i<=n;i++) cin>>arr[i];
	sort(arr+1,arr+n+1);
	cout<<arr[n]-arr[1];
}
