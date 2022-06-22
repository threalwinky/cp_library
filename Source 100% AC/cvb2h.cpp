#include<bits/stdc++.h>
using namespace std;
#define NMAX 10001
string n;
void inp(){
	cin>>n;
}
void bd(int a){
	int b = 0, j = 0;
	for (int i = a; i<=a+3; i++){
		if (n[i] == '1'){
			b+=pow(2, 3 - j);
		}
		j++;
	}
	if (b<10)
		cout<<b;
	else cout<<(char)(b-10+'A');
}
void out(){
	string m;
	if (n.length() % 4 != 0) {
		for (int i = 0; i<4-n.length()%4; i++){
			m+='0';
		}
		n = m+n;
	}
	for (int i = 0; i<n.length(); i+=4){
		bd(i);
	}
	cout<<endl;
}
int main(){
    //freopen(".inp", "r", stdin);
    int T; cin>>T;
    while (T--){	
	    inp();
	    out();
    }
}