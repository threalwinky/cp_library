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

int main(){
	FASTIO;
	while (1){
		map<char, int> m;
		fu(i, 1, 12){
			int x;
			cin>>x;
			m[x]++;
		}
		if (m[0] == 12) break;
		int ans = 0;
		fa(it, m){
			if (it.se == 4) ans++;
			if (it.se == 8) ans+=2;
			if (it.se == 12) ans+=3;
		}
		cout<<((ans == 3) ? "yes\n" : "no\n");
	}
}