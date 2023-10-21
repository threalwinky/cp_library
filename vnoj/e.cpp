#include                    <bits/stdc++.h>
using                       namespace std;
#define fi                  first
#define se                  second
#define pb(x)               push_back(x)
#define endl                cout<<"\n";
#define int               long long
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
// 	cerr << "Time Cost: " << clock() * 1000. / CLOCKS_PER_SEC << "MS" << "\n";
// }
/*--------------------------------------------------------------------------------*/


 
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	opf(1);
	int n, x;
	cin >> n >> x;
	map<int, int> m;
	for (int i=2; i<=sqrt(x) + 1; i++){
		while (x % i == 0 && x > 1){
			m[i]++;
			x/=i;
		}
	}
	for (auto x : m){
		cout << x.fi << " " << x.se << "\n";
	}
}