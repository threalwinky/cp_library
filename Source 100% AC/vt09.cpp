#include <bits/stdc++.h>
using namespace std;
bool prime(int n){
    if ( n < 2){
        return false;
    }
        for ( int i = 2; i <= sqrt(n); i++){
            if ( n % i == 0){
                return false;
            }
        }
    return true;
}
int main(){
    int n, a[10000], f[10000], b[10000];
    cin >> n;
    for ( int i = 0; i < n; i++){
    	cin >> a[i];
    	if( prime(a[i]) == true){
    		b[i] += a[i];
    }
    	f[i] = 0;
    }
    sort(b,b+n);
   for ( int i = 0; i < n; i++){
   	f[b[i]]++;
   	}
   	for ( int i = 0; i < n; i++){
   		if ( f[b[i]] >= 1 && b[i] != 0){
   			cout << b[i] << " ";
   			f[b[i]] = 0;
   			}
   		}
    return 0;
}
