#include<bits/stdc++.h>
using namespace std;
#define NMAX 10001
int T;
string s;
int twoof(int a){
	int temp = 1;
	for (int i = 0; i <= a ; i++){
		temp*=2;
	}
	return temp;
}
void out(){
	unsigned long long n = 0;
	for (int i = 0; i<s.length() ; i++){
		if (s[i] == '1') n = n*2+1;
		else n = n*2;
	}
	cout<<n<<endl;
}
void inp(){
	cin>>T;
	for (int i = 0; i < T ; i++){
		cin>>s;
		out();
	}
}
int main(){
    freopen("cvb2d.inp", "r", stdin);
    inp();
}