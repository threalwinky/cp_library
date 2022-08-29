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
unsigned long long f[NMAX];
void init(){
    f[1] = f[2] = 1;
    for (int i = 3; i<=93; i++){
        f[i] = f[i-2] + f[i-1];
    }
}
ull n, m;
void inp(){
    cin>>n>>m;
}
void out(){
    while (n!=1 && n!=2){
        
        if (m > f[n-2]){

            m-=f[n-2];
            n-=1;
        }
        else{
            n-=2;
        }
    }
    if (n == 1) cout<<"A";
    else cout<<"B";
    cout<<endl;
}
int main(){
    FASTINPUT();
    init();
    int T; cin>>T;
    while (T--){
    inp();
    out();
    }
}