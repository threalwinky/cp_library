#include <bits/stdc++.h>
using namespace std;
#define NMAX 2004
int a[NMAX][NMAX];
string s, srv,xaucon;
int n,m;
int check(string xc){
	return xc.length();
}
void inp(){
	cin>>s;
	n = s.length();
	m = n;
	for (int i = n - 1; i>=0;i--){
		srv+=s[i];
	}
}
void out(){
	for (int i = 0;i<=n;i++){
		for (int j = 0; j<=n;j++)
			if (s[i] == srv[j]) a[j+1][i+1] =a[j][i]+1;
			else a[j+1][i+1] = max(a[j][i+1], a[j+1][i]);
	}
	//cout<<s<<" "<<srv;
	/*for (int i = 0; i<=n; i++){
		for (int j =0; j<=n; j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}*/
	while (n*m!=0){
        if (s[m-1] == srv[n-1]) {
            xaucon+=s[m-1];
            m-=1;n-=1;
        }
        else {
            if (a[n-1][m] >= a[n][m-1]) n-=1;
            else m-=1;
        }
    }
    cout<<check(xaucon);
}
int main(){
	freopen("palin.inp", "r", stdin);
	inp();
	out();
}