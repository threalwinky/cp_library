#include<iostream>
using namespace std;
int main()
{
	int n; cin>>n;
	int arr[n];
	for (int i = 0; i<n; i++) cin>>arr[i];
	int k,a,b,s; cin>>k;
	for (int i = 0; i<k ;i++){
		s = 0;
		cin>>a>>b;
		for (int j = a-1; j<b; j++){
			s+= arr[j];
			
		}cout<<s<<endl;
	}
}
