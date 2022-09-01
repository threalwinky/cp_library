#include                    <bits/stdc++.h>
using namespace             std;
//#pragma comment(linker, "/stack:200000000")
//#pragma GCC optimize("Ofast,unroll-loops,tree-vectorize")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#define FASTIO              ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define FILEIO1(__, ___)    freopen(__, "r", stdin);freopen(___, "w", stdout)
#define FILEIO2(__)         freopen(__, "r", stdin);
#define FILEIO3             freopen("sol.inp", "r", stdin);freopen("sol.out", "w", stdout)
#define fu(__, ___, ____)   for (int __ = ___; __<=____; __++)
#define fd(__, ___, ____)   for (int __ = ___; __>=____; __--)
#define fa(__, ___)         for (auto __ : ___)
#define fi                  first
#define se                  second
#define all(__)             __.fi << " " << __.se <<"\n"
#define debug(x)            cout<<x<<" ";
typedef pair<int, int>      ii;
typedef long long           ll;
typedef vector<int>         vi;
typedef vector<ii>          vii;
typedef vector<ll>          vll;
const int MAX =             1e6 + 9;
const int MOD =             1e9 + 7;
const int inf =             2147483647;
const double PI =           3.14159265358979;
/*----- ----- ----- ----- ----- ----- ----- ----- ----- -----*/
bool pn[1000055];
void sieve(){
	pn[0] = 1;
	fu (i, 2, 1000050){
		if (!pn[i]){
			//cout<<i<<" ";
			for (int j = 2*i; j<=1000050; j+=i){
				pn[j] = 1;
			}
		}
	}
}
int a[MAX], ps[MAX], mps[MAX];
int main(){
	FASTIO;
	sieve();
	int n;
	cin>>n;
	ps[0] = 0;
	fu(i, 1, n){
		cin>>a[i];
		ps[i] = ps[i-1] + a[i];
	}
	mps[0] = INT_MAX;
	int ans = INT_MIN, tmp = 0;
	fu(i, 1, n){
		if (!pn[i + 1]){
			mps[i] = min(mps[i-1], ps[i]);
		}
		else mps[i] = mps[i-1];
		//cout<<mps[i]<<" ";
		if (!pn[i])
			ans = max(ans, ps[i] - mps[i]);
	}
	cout<<((ans == -1) ? 0 : ans);
}