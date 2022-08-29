#include<bits/stdc++.h>
using namespace std;
#define NMAX 1000001
void FASTINPUT(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
typedef long long ll;
typedef unsigned long long ull;
ull n;
void inp(){
	cin>>n;
}
void out(){
	ull temp = (ull)pow(n, (long double)1/3);
	if (n == temp*temp*temp) cout<<"YES";
	else cout<<"NO";
	cout<<endl;
}
int main(){
    FASTINPUT();
    int T;
    cin>>T;
    while (T--){
    inp();
    out();
	}
}