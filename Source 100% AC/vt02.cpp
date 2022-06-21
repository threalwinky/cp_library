#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,arr[10000];
    cin>>n;
    if (n<=1) cout<<"NOT FOUND";
    else {
        for (int i = 1; i<=n ; i++ ){
            cin>>arr[i];
        };sort(arr+1,arr+n+1);
        if (arr[0] == arr[n]) cout<<"NOT FOUND";else
        while (arr[n] == arr[n-1]) n-=1;
        cout<<arr[n-1];
    }
}