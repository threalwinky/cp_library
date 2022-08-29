#include<bits/stdc++.h>
using namespace std;
#define NMAX 10001
int a,b,c;
void inp(){
	cin>>a>>b>>c;
}
void out(){
	cout<<"users setClock \\"<<b<<'\\'<<a<<'\\'<<c;
}
int main(){
    cin.tie();                        
    ios_base::sync_with_stdio(false); 
    cout.tie(0);
    freopen(".inp", "r", stdin);
    inp();
    out();
}