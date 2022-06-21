#include<bits/stdc++.h>
using namespace std;
int sd(int n){
	int sum = 0, j;
	for (int i = 1; i<=sqrt(n);i++){
		j = 0;
		if (n%i==0) {
			j = n/i;
			if (i == j) sum+= i;
			else sum+= i+j;
		}
		
	}return sum;
}
int main(){
	int n,s;
	cin>>n;
	for (int i = 0; i<n;i++){
		cin>>s;
		cout<<sd(s)<<endl;
	}
}
