#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;cin>>n;
	long int arr[n];
	arr[n]=0;
	for (int i = 0; i<n; i++){
		cin>>arr[i];
		//arr1[i] = arr[i];
	}
	for (int i = 1; i<n; i++){
		if (i%2 != 0) arr[i] += abs(arr[i-1]-arr[i+1]);
	}
	for (int i = 0; i<n; i++){
		cout<<arr[i]<<" "; 
	}
}
