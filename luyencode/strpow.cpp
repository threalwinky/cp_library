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
string s, spow;
int k;
void inp(){
	cin>>s>>spow>>k;
}
void out(){
	string temp = s;
	bool check = 0;
	for (int i = 0; i<k-1; i++) s+=temp;
	if (s.length()!=spow.length()) check = 1;
	for (int i = 0; i<spow.length(); i++){
		if (s[i] != spow[i]){
			check = 1;
			break;
		}
	}
	if (check) cout<<"NO";
	else cout<<"YES";
}
int main(){
    FASTINPUT();
    inp();
    out();
}