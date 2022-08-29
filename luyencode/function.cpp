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
ull a, b, c, x;
void inp(){
	cin>>a>>b>>c>>x;
}
void out(){
	ull ans = a*x*x + b*x + c;
	cout<<ans;
}
int main(){
    FASTINPUT();
    inp();
    out();
}