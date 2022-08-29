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
long long n;
void inp(){
	cin>>n;
}
void out(){
	long long a;
	for (int i = sqrt(n); i>=1; i--){
		if (n%i==0){
			a = i;
			break;
		} 
	}
	cout<<a+n/a-2;
}
int main(){
    FASTINPUT();
    inp();
    out();
}