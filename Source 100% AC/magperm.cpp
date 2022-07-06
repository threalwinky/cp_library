#include<bits/stdc++.h>
using namespace std;
#define NMAX 100001
#define FASTINPUT(); ios::sync_with_stdio(0);\
    cin.tie(0);\
    cout.tie(0);\
typedef long long ll;
typedef unsigned long long ull;
int n, k, a[NMAX], b[NMAX];
void inp(){
	cin>>n>>k;
	for (int i = 1; i <= n ; i++){
		a[i] = i;
		b[i] = i;
	}
}
void out(){
	bool check = 0;
	for (int i = 1; i <= n ; ++i){
        if (a[i] == i){
            if (a[b[i] + k] == 0) {
                check = true;
            }
            else{
                swap(b[i],b[i+k]);
                swap(a[i],a[i+k]);
            }
        }
    }
    if (check) cout<<"-1";
    else
	for (int i = 1; i <= n ; i++){
		cout<<a[i]<<" ";
	}
}
int main(){
    FASTINPUT();
    inp();
    out();
}