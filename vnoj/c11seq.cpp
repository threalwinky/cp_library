#include<iostream>
#include<limits.h>
using namespace std;

//declare variables
long long n, l, r;
long long a[100001];

int main(){
	cin>>n>>l>>r;
	for (int i = 0; i<n; i++)
		cin>>a[i];
	long long i = 0, j = 0, sum = a[0], dem = 0;
	while (i < n){
		if (sum >= l){
			dem++;
			cout<<i<<" "<<j<<endl;
		}
		if (a[j+1] + sum <= r && j < n - 1) {
			sum+=a[j + 1];
			j++;
		}
		else{
			sum-=a[i];
			i++;
		}
	}
	cout<<dem;
}