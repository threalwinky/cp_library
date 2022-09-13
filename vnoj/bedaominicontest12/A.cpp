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
const int MAX =             1e5  + 9;
const int MOD =             1e9 + 7;
const int inf =             2147483647;
const double PI =           3.14159265358979;
/*----- ----- ----- ----- ----- ----- ----- ----- ----- -----*/
int a[1001];
bool v[10000001];
int main(){
	FASTIO;
	int n, m;
	cin>>n>>m;
	for (int i = 0; i<n; i++){
		cin>>a[i];
	}
	for (int i = 0; i<n; i++){
		if (a[i] <= m) v[a[i]] = 1;
		for (int j = 0; j<n; j++){
			if (a[i] + a[j] <= m && i != j) v[a[i] + a[j]] = 1;
			for (int k = 0; k <n; k++){
				if (a[i] + a[j] + a[k] <= m && i != j && i!=k &&j !=k) v[a[i] + a[j] + a[k]] = 1;
			}
		}
	}
	int ans = 0;
	for (int i =0; i<=m; i++) if (v[i] == 1) ans++;
	cout<<ans;
}