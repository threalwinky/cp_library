#include<bits/stdc++.h>
using namespace std;
#define NMAX 500001
void FASTINPUT(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
typedef long long ll;
typedef unsigned long long ull;
long long n, a[NMAX], q;
void inp(){
	cin>>n>>q;
	for (int i = 0; i<n; i++){
		cin>>a[i];
	}
}
void out(){
	while (q--){
		map<long long, int> m;
		
		long long l ,k;
		cin>>l>>k;
		a[l-1] = k;
		for (int i = 0; i<n; i++){
			m[a[i]]++;
		}
		while (true){
			bool check = 0;
			for (auto x:m){
				if (x.second >= 2){
					check = 1;
					m[x.first]-=2;
					m[x.first+1]++;
					break;
				}
			}
			if (!check) break;
		}
		long long maxn = INT_MIN;
		for (auto x:m)
		{
			if (x.first > maxn && x.second >= 1){
				maxn = x.first;
			}
		}
		cout<<maxn<<endl;
	}
}
int main(){
    FASTINPUT();
    inp();
    out();
}