#include<bits/stdc++.h>
using namespace std;
#define NMAX 10001
string m,n,s;
void inp(){
	cin>>m>>n;
	for (int i = 0; i<n.length(); i++){
		if (n[i] == '0'&&m[i] == '0') s+='0';
		if (n[i] == '1'&&m[i] == '1') s+='0';
		if (n[i] == '0'&&m[i] == '1') s+='1';
		if (n[i] == '1'&&m[i] == '0') s+='1';
	}
}
void out(){
	int temp = 0;
	while (s[temp] == '0') temp++;
	for (int i = temp; i<s.length(); i++){
		cout<<s[i];
	}
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    inp();
    out();
}