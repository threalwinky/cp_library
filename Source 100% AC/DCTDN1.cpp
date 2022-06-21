#include<iostream>
using namespace std;
int main(){
	int n,s,temp=0,temp1 = 0; cin>>n;
	for (int i = 0; i<n; i++){
		cin>>s;
		if (s > temp ){
			temp = s;
			temp1 ++;
		}
	}
	cout<<temp1;
}
