#include<iostream>
using namespace std;
const int MAX = 1e5 + 2;
int F[MAX];
void sieve(){
	for (int i = 1; i<=MAX; i++){
		for (int j = 2*i; j <= MAX; j+=i){
				F[j] += i;
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	sieve();
	int l, r, ans = 0;
	cin>>l>>r;
	for (int i = l; i<=r; i++){
		if (F[i] > i) ans++;
	}
	cout<<ans;
}