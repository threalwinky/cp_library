#include<bits/stdc++.h>
using namespace std;
#define NMAX 10001
typedef long long ll;
ll diem1, diem2, tg1 = 0, tg2 = 0;
void inp(){
	ll n;cin>>n;
	for (ll i = 0 ;i<n ;i++){
		ll x; cin>>x;
		if (x>0) {
			diem1+=10;
			tg1 += x;
		}
	}
	for (ll i = 0 ;i<n ;i++){
		ll x; cin>>x;
		if (x>0) {
			diem2+=10;
			tg2 += x;
		}
	}
}
void out(){
	if (tg1 == tg2 && diem1 == diem2)
	{
		cout<<"Double Win";
	}
	else if (diem1 >= diem2 && tg1 <= tg2)
	{
		cout<<1;
	}
	else if (diem2 >= diem1 && tg2 <= tg1)
	{
		cout<<2;
	}
	else if(tg2 > tg1) cout<<2;
	else cout<<1;
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    inp();
    out();
}