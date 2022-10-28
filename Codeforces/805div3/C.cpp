#include<bits/stdc++.h>
using namespace std;
#define NMAX 100001
void FASTINPUT(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
typedef long long ll;
typedef unsigned long long ull;
ll n, p;
void inp(){
	cin>>n>>p;
}
void out(){
	ll a[NMAX];
	for (int i = 0; i<n; i++){
		cin>>a[i];
	}
	for (int i = 0; i<p; i++){
		long long s,t, vts = 1000000, vtt = -1;
		cin>>s>>t;
		bool check = 0;
		for (long long j = 0; j<n; j++){
			if (a[j] == s) vts = min(vts, j);
			if (a[j] == t) vtt = max(vtt, j);
		}
		if (vts > vtt || vts == 1000000||vtt == -1) cout<<"NO";
		else cout<<"YES";
		cout<<'\n';
	}
}
int main(){
    FASTINPUT();
   	int T; cin>>T;
    while (T--){
    inp();
    out();
    }
}
