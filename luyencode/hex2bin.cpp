#include<bits/stdc++.h>
using namespace std;
#define NMAX 10001
string n;
void inp(){
	cin>>n;
}
void bd(int i){
	int so, cnt = 0;
	if (n[i] < 65)
		so = n[i] - '0';
	else so = n[i] - 'A' + 10;
	stack <int> bin;
    while (so!=0) {
        bin.push(so%2);
        so/=2;
        cnt++;
    }
    if (i != 0)
    if (cnt < 4){
    	for (int a = 0; a<4-cnt; a++){
    		cout<<'0';
    	}
    }
    while (!bin.empty()){
        cout<<bin.top();
        bin.pop();
    }
}
void out(){
	for (int i = 0; i < n.length() ; i++){
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