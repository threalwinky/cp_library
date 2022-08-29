#include<bits/stdc++.h>
using namespace std;
#define NMAX 10001
void FASTINPUT(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
typedef long long ll;
typedef unsigned long long ull;
int n;
void inp(){
	cin>>n;
}
void out(){
	vector<int> v;
	int total = 0;
	for (int i = 0; i<n; i++){
		int x; cin>>x;
		if (i != n - 1){
			total += x;
		}
		v.push_back(x);
	}
	for (int j = 0; j < (n - 1) * 2; j++){
	for (int i = 0; i<n-1; i++){
		for (int k =0; k < n-1; k++){
			if (v[k] != 0) break;
			
		}
		if (v[i] != 0 && v[i + 1] == 0) {
			v[i] --;
			v[i+1] ++;
		}
	}
	}
}
int main(){
    FASTINPUT();
   	int T; cin>>T;
    while (T--){
    inp();
    out();
    }
}