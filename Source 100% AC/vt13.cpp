#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	long int a[n],b[n-1],max = 0;
	for (int i =0; i<n; i++) cin>>a[i];a[n] = a[0];
	for (int i =0; i<n; i++) b[i] = a[i] + a[i+1];
	for (int i =0; i<n; i++) cout<<b[i];
	/*for (int i =0; i<n; i++) if (max < b[i]) max = b[i];
	for (int i =1; i<n; i++){
	if (max == b[i])
	if (a[i] >= a[i+1])cout<<a[i]<<" "<<a[i+1];
	else cout<<a[i+1]<<" "<<a[i];
	break;
	//for (int i =0; i<n; i++) cout<<b[i];*/
}

