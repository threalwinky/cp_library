#include<bits/stdc++.h>
using namespace std;
#define NMAX 10001
#define FASTINPUT(); ios::sync_with_stdio(0);\
    cin.tie(0);\
    cout.tie(0);\
typedef long long ll;
typedef unsigned long long ull;
ull n, total;
void inp(){
	cin>>n;
}
void out(){
	cout<<(1+n)*n/2;
}
int main(){
    FASTINPUT();
    inp();
    out();
}