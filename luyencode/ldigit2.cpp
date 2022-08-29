#include<iostream>
#include<string>
using namespace std;

int main(){
    int a, n, ans = 1;
    cin>>a>>n;
    for (int i = 0; i<n; i++){
        ans = (a*ans)%10;
    }
    cout<<ans;
}