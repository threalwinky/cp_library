#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
    int n, a[1000001];
    cin>>n;
    for (int i = 1; i<=n; i++){
        cin>>a[i];
    }
    sort(a+1, a+n+1);
    if (abs(a[1] + a [2]) > abs(a[n-1] + a[n])) cout<<abs(a[1] + a [2]);
    else cout<< abs (a[n-1] + a[n]);
}