#include<iostream>
using namespace std;
int main(){
    bool temp = 0;
    int n,x,s;
    cin>>n>>x;
    for (int i =1 ;i <= n; i++){
        cin>>s;
        if (s==x){
            temp = 0;
            break;
        }
        else temp = 1;
    }
    if (temp == 0) cout<<"YES";
    else cout<<"NO";
}
