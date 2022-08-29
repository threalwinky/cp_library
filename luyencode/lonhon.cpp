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
int a, b;
void inp(){
	cin>>a>>b;
}
void out(){
	int temp = 0;
	while (a<=b){
		a*=3;
		b*=2;
		temp++;
	}
	cout<<temp;
}
int main(){
    FASTINPUT();
    inp();
    out();
}