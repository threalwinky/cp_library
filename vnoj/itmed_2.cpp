#include<iostream>
using namespace std;
int main(){
	int n, a[100001], F[100001], k;
	cin>>n>>k;
	for (int i = 0; i<n; i++){
		cin>>a[i];
	}
	for (int i = 0; i<n - k; i++){
		for (int j = i+1; j<i+k; j++)
			F[i] = max(F[j], 0) + a[i];
	}
	for (int i = 0; i<n; i++) cout<<F[i]<<" ";
}