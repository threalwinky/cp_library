#include<bits/stdc++.h>
using namespace std;
#define NMAX 10001
long long n,a,b;
void inp(){
	cin>>n>>a>>b;
}
void out(){
	if (n%a==0){
        if (n%b==0) cout<<"Co, tat ca!";
        else cout<<"Chi chia het cho a.";
    }
    else{
        if (n%b==0) cout<<"Chi chia het cho bb.";
        else cout<<"Khong chia het cho so nao ca.";
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