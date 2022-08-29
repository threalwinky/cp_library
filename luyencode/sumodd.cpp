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
ull a, b;
void inp(){
	cin>>a>>b;
}
void out(){
	if (a % 2==0) a++;
	if (b % 2==0) b--;
	if ((b-a)%4==0) cout<<(a+b)/2+(a+b)*((b-a)/4);
	else cout<<(a+b)*((b-a)/4+1);
}
int main(){
    FASTINPUT();
    inp();
    out();
}