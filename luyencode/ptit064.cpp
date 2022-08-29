#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[100001], b[100001], n, tmp;
    cin>>n;
    for (int i = 0; i<n; i++) cin>>a[i];
    for (int i = 0; i<n; i++) cin>>b[i];
    a[n] = b[n] = INT_MAX;
    int i = 0, j = 0;
    for (int k = 0; k<2*n; k++){
        if (a[i] < b[j]) {
            tmp = a[i];
         	i++;   
        }
        else{
            tmp = b[j];
            j++;
        }
        cout<<tmp<<" ";
    }
}