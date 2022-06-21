#include<bits/stdc++.h>
using namespace std;
int main()
{

    int m,n,a, temp = 0;
    cin>>m>>n>>a;
    int arr[m*n];
    for (int i  = 0 ; i< m*n ; i++){
        cin>>arr[i];
    }
    sort(arr+(a-1)*n,arr+(a-1)*n+m);
    for (int i  = 0 ; i< m ; i++){
    for (int j = 0; j < n; j++){
        cout<<arr[temp]<<" ";
        temp++;
    }
    cout<<endl;
    }
}
