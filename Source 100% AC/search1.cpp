#include<bits/stdc++.h>
using namespace std;
#define NMAX 1000001
int arr[NMAX],m,n;
void inp(){
	cin>>m>>n;
	for (int i = 0; i<m; i++){
		cin>>arr[i];
	}
}
bool tknp(áint x, int l, int r){
	if (r >= l) {
    int mid = l + (r - l) / 2; 

    if (arr[mid] == x)
      return mid;
 
    if (arr[mid] > x)
      return tknp(l, mid - 1, x);
 
    return tknp(mid + 1, r, x);
 	}
  	return 0;
}
void out(){
	for (int i = 0; i < n ; i++){
		int y; cin>>y;
		cout<<tknp(y, 1, m);
	}
}
int main(){
    freopen("search1.inp", "r", stdin);
    inp();
    out();
}