#include<bits/stdc++.h>
using namespace std;
#define NMAX 10001
#define FASTINPUT(); ios::sync_with_stdio(0);\
    cin.tie(0);\
    cout.tie(0);\
typedef long long ll;
typedef unsigned long long ull;
int m,n,h, a[1001][1001];
void inp(){
	cin>>m>>n>>h;
	for (int i = 1; i<= m; i++)
		for (int j = 1; j <= n ; j++)
			cin>>a[i][j];
}
void out(){
	vector<int> v;
	for (int i = 1; i<=m; i++) v.push_back(a[i][h]);
	sort(v.begin(), v.end());
	for (int i = 1; i<=m; i++){
		
		for (int j = 1; j <= n ; j++){
			if (j == h) {
				cout<<v[i-1]<<" ";
			}
			else
			cout<<a[i][j]<<" ";
		}
		cout<<'\n';

	}
}
int main(){
    FASTINPUT();
    inp();
    out();
}