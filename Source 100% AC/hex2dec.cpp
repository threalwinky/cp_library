#include<bits/stdc++.h>
using namespace std;
#define NMAX 10001
string s;
void inp(){
	cin>>s;
}
void out(){
    unsigned long long n=0;
    for(int i=0; i<s.length(); i++)
    {
        int v;
        if      ('a' <= s[i] && s[i] <='f') { v=s[i]-97+10; }
        else if ('A' <= s[i] && s[i] <='F') { v=s[i]-65+10; }
        else if ('0' <= s[i] && s[i] <='9') { v=s[i]-48;    }
        else break;
        n*=16;
        n+=v;
    }
    cout<<n<<endl;
}
int main(){
    //freopen(".inp", "r", stdin);
    int T; cin>>T;
    while (T--){
    inp();
    out();
	}
}