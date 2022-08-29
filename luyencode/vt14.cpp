#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; 
	cin>>n;int arr[n];
	for (int i = 1; i<= n;i++){
		cin>>arr[i];
	}
	sort(arr+1,arr+n+1);
	int maxx= (arr[n ] * arr[n - 1]);
	if (maxx < arr[1] * arr[2])
	maxx = arr[1] * arr[2];
	cout << maxx;
	//if ((arr[1]*arr[2])>=(arr[n]*arr[n-1]))
	//cout<<arr[1]*arr[2];
	//else cout<<arr[n]*arr[n-1];
	//for (int i = 1; i<= n;i++){
	//	cout<<arr[i];
}
