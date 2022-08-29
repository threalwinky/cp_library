#include<iostream>
using namespace std;
int main()
{

    int m,n, temp = 0, sum = 0;
    cin>>m>>n;
    int arr[m*n];
    for (int i  = 0 ; i< m*n ; i++){
        cin>>arr[i];
    }
    for (int i  = 0 ; i< m ; i++){
    for (int j = 0; j < n; j++){
        if (i % 2 != 0) sum+=arr[temp];
        temp++;
    }
    }
    cout<<sum;
}

