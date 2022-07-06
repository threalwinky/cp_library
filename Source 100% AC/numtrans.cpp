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
multiset<string, greater<string>> ms;
void inp(){
	int n;
	cin>>n;
	for (int i = 0; i < n ; i++){
		string s; cin>>s; ms.insert(s);
	}
}
void out(){
	string ans;
	for (auto x:ms) ans+=x;
	cout<<ans;
}
int main(){
    FASTINPUT();
    inp();
    out();
}