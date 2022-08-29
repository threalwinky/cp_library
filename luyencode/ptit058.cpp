#include<bits/stdc++.h>
using namespace std;
#define NMAX 10001
void FASTINPUT(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
typedef long long ll;
typedef unsigned long long ull;
int n;
void inp(){cin>>n;}
void out(){
	cout<<"*";
    for (int j = 0; j<n-1; j++) cout<<" "; cout<<"\n";
	for (int i = 0; i<=n-3;i++){
		cout<<"*";
		for (int j = 0; j<=i-1; j++) cout<<" ";
		cout<<"*";
		for (int j = n-i-2; j>0; j--) cout<<" ";
		cout<<endl;
	}
	for (int i = 0; i<(n-1)*2+1; i++){
		cout<<"*";
	}
	cout<<endl;
	for (int i = n-3; i>=0;i--){
		for (int j = 0; j<2*n-3-i; j++) cout<<" ";
		cout<<"*";
		for (int j = 0; j<i; j++) cout<<" ";
		cout<<"* "<<endl;
	}
	for (int i = 0; i<(n-1)*2; i++){
		cout<<" ";
	}
	cout<<"*";
}
int main(){
    FASTINPUT();
    inp();
    out();
}