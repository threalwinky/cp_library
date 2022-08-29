#include<iostream>
using namespace std;
int main(){
    long long n, a[1000005], b[1000005];
    bool check = 0;
    cin>>n;
    for (int i = 0; i<n; i++) cin>>a[i];
    for (int i = 0; i<n-1; i++) b[i] = a[i+1] - a[i];
    for (int i = 0; i<n-2; i++){
        if (b[i] != b[i+1]){
            check = 1;
            break;
        }
    }
    if (check) cout<<"NO";
    else cout<<"YES";
}