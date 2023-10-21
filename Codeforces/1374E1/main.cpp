#include                    <bits/stdc++.h>
using                       namespace std;
#define fi                  first
#define se                  second
#define pb(x)               push_back(x)
#define endl                cout<<"\n";
//#define int               long long
typedef pair<int, int>      ii;
typedef vector<int>         vi;
const string F =            "sample";
const string IF =           F + ".inp";
const string OF =           F + ".out";
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
	opf(0);
	int n, t;
	cin >> n >> t;
	vector<int> a, b, c;

	for (int i=0; i<n; i++){
		int x, y, z;
		cin >> x >> y >> z;
		if (y == 1 && z == 1){
			a.push_back(x);
		}
		else if (y == 1 && z == 0){
			b.push_back(x);
		}
		else if (y == 0 && z == 1){
			c.push_back(x);
		}
	}

	
	sort(b.begin(), b.end());
	sort(c.begin(), c.end());

	for (int i=0; i<min(b.size(), c.size()); i++){
		a.push_back(b[i] + c[i]);
	}
	sort(a.begin(), a.end());
	int ans = 0;
	if (a.size() < t) cout << -1;
	else{
		for (int i=0; i<t; i++){
			ans += a[i];
		}
		cout << ans;
	}
	
}