#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned long int arr[3],temp;
    for (int i = 0; i<3;i++) cin>>arr[i];
    sort(arr,arr+3);
    if (arr[2]>arr[0]+arr[1]) temp = arr[2]-arr[0]-arr[1]+1;
    cout<<temp;
}
