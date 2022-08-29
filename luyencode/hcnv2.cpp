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
struct rectangle{
	ll xa, ya, xb, yb;
}typedef hcn;
hcn t1, t2;
void inp(){
	cin>>t1.xa>>t1.ya>>t1.xb>>t1.yb;
	cin>>t2.xa>>t2.ya>>t2.xb>>t2.yb;
}
ll tinhcanh(ll a, ll b, ll c, ll d){
	if (a>b) swap(a,b);
	if ((c<=a&&d>=b)||(c>=b&&d<=a)){
		return abs(a-b);
	}
	else if ((c>=a&&c<=b)||(d>=a&&d<=b)){
		
		if ((c>=a&&c<=b)&&(d>=a&&d<=b)) {

			return abs(c-d);

		}
		else if ((c>=a&&c<=b)){
			if (d>b) return abs(b-c);
			else return abs(c-a);
		}
		else if ((d>=a&&d<=b)){
			if (c>b) return abs(b-d);
			else return abs(d-a);
		}
	}
	return 0;
}
void out(){
	cout<<tinhcanh(t1.xa, t1.xb, t2.xa, t2.xb)*tinhcanh(t1.ya, t1.yb, t2.ya, t2.yb);
}
int main(){
    FASTINPUT();
    inp();
    out();
}