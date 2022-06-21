#include<iostream>
using namespace std;
int main()
{

    int n, temp = 0, sum = 0;
    cin>>n;
    int arr[n*n];
    for (int i  = 0 ; i< n*n ; i++){
        cin>>arr[i];
    }
    for (int i  = 0 ; i< n*n ; i+=n+1){
        sum += arr[i];
    }
    cout<<sum;
}

