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
double f;
void inp(){
	cin>>f;
}
void out(){
    if (floor(f) == ceil(f)) 
    
	cout<<floor(f)<<" "<<ceil(f)+1;
    else
	cout<<floor(f)<<" "<<ceil(f);
    
}
int main(){
    FASTINPUT();
    inp();
    out();
}