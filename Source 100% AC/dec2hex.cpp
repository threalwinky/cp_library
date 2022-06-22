#include<bits/stdc++.h>
using namespace std;
#define NMAX 10001
stack<char> s;
unsigned long long n;
void inp(){
	cin>>n;
}
void xuly(){
	
	int m = n%16;
	if (m < 10){
		s.push(m + '0');
	}else s.push(m+'7');
	
}
void out(){
	while (n>0){
		xuly();
		n/=16;
	}
	while (!s.empty()){
		cout<<s.top();
		s.pop();
	}
	cout<<endl;
}
int main(){
    //freopen(".inp", "r", stdin);
    int T; cin>>T;
    while (T--){
    inp();
    out();
	}
}