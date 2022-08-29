#include<bits/stdc++.h>
using namespace std;
#define NMAX 10001
int n;
void inp(){
	cin>>n;
}
void out(){
	for (int i = 0; i<=30; i++){
		cout<<n<<" "<<"*"<<" "<<i<<" "<<"="<<" "<<n*i<<endl;
	}
}
int main(){
    cin.tie();                        
    ios_base::sync_with_stdio(false); 
    cout.tie(0);
    //freopen(".inp", "r", stdin);
    inp();
    out();
}