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
// 	cerr << "Time Cost: " << clock() * 1000. / CLOCKS_PER_SEC << "MS" << "\n";
// }
/*--------------------------------------------------------------------------------*/

struct tri{
	int a, b, c;
};

bool cmp(tri a, tri b){
	if (a.c == b.c) return a.b < b.b;
	return a.c > b.c;
}

signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	opf(1);
	int n;
	cin >> n;
	vector<tri> v;
	map<int, pair<int, int>> m;
	for (int i=1; i<=n; i++){
		int x;
		cin >> x;
		if (m[x].fi == 0){
			m[x].fi = i;
		}
		else
		m[x].fi = min(i, m[x].fi);
		m[x].se++;
	}
	for (auto x : m){
		v.push_back({x.fi, x.se.fi, x.se.se});
	}
	sort(v.begin(), v.end(), cmp);
	for (auto x : v){
		for (int i = 1; i<= x.c; i++){
			cout << x.a << " ";
		}
	}
}