#include<bits/stdc++.h>
using namespace std;
int n, a[100];
void inp(){
    cin>>n;
}
void outnum(){
    for (int i = 1; i < n;i++) cout<<a[i]<<" ";
    cout<<a[n]<<endl;
}
void out(){
    for (int i = 1;i <= n; i++) a[i] = i;
    while(true){
        outnum();
        int j = n-1, k = n;
        while (a[j] > a[j+1] && j>0) j--;
        if (j == 0) break;
        else {
            while (a[k] < a[j]) k--;
            swap(a[j], a[k]);
            int l = j+1, r = n;
            while (l<r){
                swap(a[l], a[r]); 
                l++; 
                r--; 
            }
        }
    }
}
int main(){
    freopen("lkhoanvi.inp", "r", stdin);
    inp();
    out();
}