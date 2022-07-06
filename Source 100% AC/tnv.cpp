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
int n;
map<int, int> m;
void inp(){
	cin>>n;
	for (int i = 0; i < n ; i++){int x; cin>>x; m[x]++;}
}
void out(){
    int maxx = INT_MIN, gtmaxx = INT_MIN;
	for (auto x:m){
        if (x.second >= maxx){
            maxx = x.second;
            gtmaxx = x.first;
        }
    }
    cout<<gtmaxx<<" "<<maxx;
}
int main(){
    FASTINPUT();
    inp();
    out();
}