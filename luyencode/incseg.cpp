#include<iostream>
using namespace std;
int main(){
    int n, maxn = 0, dem = 1, temp; cin>>n;
    cin>>temp;
    for (int i = 1; i<n; i++){
        int x; cin>>x;
        if (x>=temp){
            dem++;
        }
        else dem = 1;
        temp = x;
        maxn = max(maxn, dem);
    }
    cout<<maxn;
}