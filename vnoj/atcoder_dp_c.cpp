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
const int MAX =             1e5 + 7;
const int MOD =             1e9 + 7;
const int inf =             2147483647;
const double PI =           3.14159265358979;
/*----- ----- ----- ----- ----- ----- ----- ----- ----- -----*/
int F[MAX][4];
int main(){
	FASTIO;
	int n;
	cin>>n;
	fu(i, 1, n){
		fu(j, 1, 3){
			int x;
			cin>>x;
			if (j == 1) F[i][j] = max(F[i-1][2], F[i-1][3]) + x;
			else if (j == 2) F[i][j] = max(F[i-1][1], F[i-1][3]) + x;
			else if (j == 3) F[i][j] = max(F[i-1][1], F[i-1][2]) + x;
		}
	}	
	cout<<max(F[n][1], max(F[n][2], F[n][3]));
}

