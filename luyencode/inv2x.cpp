#include<iostream>
using namespace std;
int main(){
    int n, a[1000005], dem = 0;
    cin>>n;
    for (int i = 0; i<n; i++) cin>>a[i];
    for (int i = 0; i<n; i++){
        for (int j = i; j<n;j++){
            if (a[i] > 2*a[j]) dem++;
        }
    }
    cout<<dem;
}