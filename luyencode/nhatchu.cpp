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
string s;
void inp(){
	cin>>s;
}
void out(){
	string ans;
	for (int i = 0; i<s.length(); i++){
		if (ans.find(s[i]) == ULLONG_MAX) ans+=s[i];
		
	}
	cout<<ans;
}

int main(){
    FASTINPUT();
    inp();
    out();
}