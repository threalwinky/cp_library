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
const int MAX =             3e5 + 9;
const int MOD =             1e9 + 7;
const int inf =             2147483647;
const double PI =           3.14159265358979;
/*----- ----- ----- ----- ----- ----- ----- ----- ----- -----*/
ll a[MAX], F[MAX];
int main(){
	FASTIO;
	int n, k;
	cin>>n>>k;
	F[0] = 0;
	F[1] = 0;
	cin>>a[1];
	fu(i, 2, n){
		cin>>a[i];
		F[i] = LLONG_MAX;
		fd(j, i, i - k){
			if (j == 0) break;
			F[i] = min(F[j] + abs(a[i] - a[j]), F[i]);
		}
	}
	cout<<F[n];
}