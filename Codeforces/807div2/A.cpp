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
int n, x;
void inp(){
	cin>>n>>x;
}
void out(){
	int check = 0;
	std::vector<int> v;
	for (int i = 0; i<2*n; i++){
		int tmp; cin>>tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i<n; i++){
		if (v[i + n] - v[i] < x){
			check = 1;
			break;
		}
	}
	if (check) cout<<"NO";
	else cout<<"YES";
	cout<<endl;
}
int main(){
    FASTINPUT();
   	int T; cin>>T;
    while (T--){
    inp();
    out();
    }
}