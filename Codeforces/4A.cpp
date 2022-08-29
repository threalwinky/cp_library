#include<bitas/stdc++.h>
using namespace std;
#define NMAX 10001
int n;
void inp(){
	cin>>n;
}
void out(){
	if (n%2==0 && n>2) cout<<"YES";
	else cout<<"NO";
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    inp();
    out();
}