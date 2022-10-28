
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
long long n;
void inp(){
	cin>>n;
}
void out(){
	cout<<(long long)(n - pow(10, to_string(n).length()-1))<<endl;
}
int main(){
    FASTINPUT();
   	int T; cin>>T;
    while (T--){
    inp();
    out();
    }
}
