#include<bits/stdc++.h>
using namespace std;
#define FASTIO              ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define FILEIO1(__, ___)    freopen(__, "r", stdin);freopen(___, "w", stdout);
#define FILEIO2(__)         freopen(__, "r", stdin);
#define fu(i, __, ___)      for (int i = __; i<=___; i++)
#define fd(i, __, ___)      for (int i = __; i>=___; i--)
#define fa(__, ___)         for (auto __ : ___)
#define pow2(__)            __*__
#define max(__, ___)        ((__ > ___) ? __ : ___)
#define min(__, ___)        ((__ < ___) ? __ : ___)
#define abs(__)             ((__ < 0) ? -__ : __)
#define fi                  first
#define se                  second
#define all(__)             __.fi << " " << __.se
#define int long long
typedef pair<int, int>      ii;
typedef int64_t             ll;
typedef vector<int>         vi;
typedef vector<ii>          vii;
typedef vector<ll>          vll;
const int MAX =             1e5;
const int MOD =             1e9 + 7;
const int inf =             2147483647;
const double PI =           3.14159265358979;
/*----- ----- ----- ----- ----- ----- ----- ----- ----- -----*/

main(){
	FASTIO;
	int T;
	cin>>T;
	while (T--){
		int x, y, a = 0, b = 0;
		cin>>x>>y;
		stack<int> tmp1, tmp2, tmp3, tmp4;
		for (int i = 1; i<=x; i++){
			if (i%4==0 || (i + y) % 4 == 0) tmp1.push(i);
			else if (i % 2 == 0) tmp2.push(i);
			else if (i + y %2==0)tmp3.push(i);
			else tmp4.push(i);
		}
		if (tmp1.size() < abs(tmp2.size() - tmp3.size()) + tmp4.size()) cout<<"NO\n";
		else {
			cout<<"YES\n";
			while (!tmp4.empty()){
				if (tmp1.top() % 4 == 0){
					cout<<tmp4.top()<<" "<<tmp1.top()<<"\n";
					tmp4.pop(); tmp1.pop();
				}
				else{
					cout<<tmp1.top()<<" "<<tmp4.top()<<"\n";
					tmp4.pop(); tmp1.pop();
				}
			}
			while (!tmp2.empty() && !tmp3.empty()){
				cout<<tmp3.top()<<" "<<tmp2.top()<<"\n";
				tmp3.pop();tmp2.pop();
			}
			while (!tmp2.empty()){
				if (tmp1.top() % 4 == 0){
					cout<<tmp2.top()<<" "<<tmp1.top()<<"\n";
					tmp2.pop(); tmp1.pop();
				}
				else{
					cout<<tmp1.top()<<" "<<tmp2.top()<<"\n";
					tmp2.pop(); tmp1.pop();
				}
			}
			while (!tmp3.empty()){
				if (tmp1.top() % 4 == 0){
					cout<<tmp3.top()<<" "<<tmp1.top()<<"\n";
					tmp3.pop(); tmp1.pop();
				}
				else{
					cout<<tmp1.top()<<" "<<tmp3.top()<<"\n";
					tmp3.pop(); tmp1.pop();
				}
			}
			while (!tmp1.empty()){
				int x1 = tmp1.top();
				tmp1.pop();
				int x2 = tmp1.top();
				tmp1.pop();
				if (x1 % 4 == 0){
					cout<<x2<<" "<<x1<<"\n";
				}
				else{
					cout<<x1<<" "<<x2<<"\n";
				}
			}
		}
	}
}