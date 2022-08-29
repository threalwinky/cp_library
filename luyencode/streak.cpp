#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, maxtail = INT_MIN, maxhead = INT_MIN, temptail = 0, temphead = 0;
    cin>>n;
    for (int i = 0; i<n; i++){
        string s;
        cin>>s;
        if (s == "Heads"){
            temphead++;
            temptail = 0;
        }
        else {
            temphead = 0;
            temptail++;
        }
        maxtail = max(maxtail, temptail);
        maxhead = max(maxhead, temphead);
    }
    cout<<maxhead<<" "<<maxtail;
}