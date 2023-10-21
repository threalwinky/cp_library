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


 
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	opf(0);
	int n, k;
	cin >> n >> k;
	vi v(n);
	for (int &x : v){
		cin >> x;
	}
	sort(v.begin(), v.end(), greater<int>());
	int ans = 0;
	for (int i = 0; i < k; i++){
		ans += v[i];
	}
	cout << ans;
}
