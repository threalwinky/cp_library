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
int a, b, x;
void inp(){
	cin>>a>>b>>x;
}
void out(){
	cout<<3*x-a-b;
}
int main(){
    FASTINPUT();
    inp();
    out();
}