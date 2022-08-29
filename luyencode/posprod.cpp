#include<iostream>
using namespace std;
int main(){
    bool check = 1;
    int n, dem1 = 0, dem2 = 0; cin>>n;
    for (int i = 0; i<n; i++){
        long long x; cin>>x;
        if (x<0) dem1++;
        if (x>0) dem2++;
        if (x == 0){
            check = 0;
            break;
        }
    }
    if (check)
    cout<<min(dem1, dem2);
    else cout<<-1;
}