#include				<bits/stdc++.h>
using 					namespace std;
#define fi 				first
#define se 				second
#define pb(x) 			push_back(x)
#define endl 			cout<<"\n";
//#define int 			long long
typedef 				vector<int> vi;
typedef					pair<int, int> ii;
const string F =		"sample";
const string IF = 		F + ".inp";
const string OF =		F + ".out";
const int maxN = 		1e6;
const int mod  = 		1e9 + 7;
void opf(bool c){		if (c == 1){	
freopen(IF.c_str(), 	"r", stdin);
freopen(OF.c_str(), 	"w", stdout);}}
// bool mem1;
// void clockt(){
// 	bool mem2;
// 	cerr << "\nMemory Cost: " << abs(&mem1 - &mem2) / 1024. / 1024. << "MB" << "\n";
// 	cerr << "Time Cost: " << clock() * 1000. / CLOCKS_PER_SEC << "MS" << "\n";
// }
/*--------------------------------------------------------------------------------*/

int f[100001];
int v[100001];
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	opf(0);
	int n;
	cin >> n;
	for (int i=1; i<=n; i++){
		cin >> v[i];
	}
	for (int i=1; i<=4; i++){
		f[i] = v[i];
	}
	for (int i=5; i<=n + 1; i++){
		f[i] = min(min(f[i-1], f[i-2]), min(f[i-3], f[i-4])) + v[i];
	}
	cout << f[n + 1];
}