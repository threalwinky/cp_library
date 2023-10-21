#include                    <bits/stdc++.h>
using                       namespace std;
#define fi                  first
#define se                  second
#define pb(x)               push_back(x)
#define endl                cout<<"\n";
//#define int               long long
typedef pair<int, int>      ii;
typedef vector<int>         vi;
typedef long double         ldb;
const string F =            "sample";
const string IF =           F + ".inp";
const string OF =           F + ".out";
const ldb PI =              3.14159265358979;
const int maxN =            1e6;
const int mod  =            1e9 + 7;
void opf(bool c){           if (c == 1){	
freopen(IF.c_str(),         "r", stdin);
freopen(OF.c_str(),         "w", stdout);}}
// bool mem1;
// void clockt(){
// 	bool mem2;
// 	cerr << "\nMemory Cost: " << abs(&mem1 - &mem2) / 1024. / 1024. << "MB" << "\n";
// 	cerr << "Time Cost: " << clock() * 1000. / CLOCKS_PER_SEC << "MS" << "\n";u
// }
/*--------------------------------------------------------------------------------*/

char a[1000][1000];
 
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	opf(0);
	int n, m;
	cin >> n >> m;
	for (int i=1; i<=n; i++){
		for (int j=1; j<=m; j++){
			cin >> a[i][j];
		}
	}
	for (int i=1; i<=n; i++){
		for (int j=1; j<=m; j++){
			if (a[i][j] == '.' && a[i][j+1] == '.' && a[i][j+2] == '.'){
				cout << i << " " << j;
				return 0;
			}
		}
		// cout << "\n";
	}
}