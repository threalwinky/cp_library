#include <bits/stdc++.h>
using namespace std;
int check(int n){
    if(n<0) return 0;
    int r = sqrt(n);
    if(r*r==n) return 1;
    else return 0;
}
int main()
{
    //freopen("mt06.inp", "r", stdin);
    int m,n, cnt=0, x;
    cin>>m>>n;
    bool b[10001];
    memset(b, 0, 10001);
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>x;
            if(check(x)){
                b[x]=true;
                cnt++;
            }
        }
    }
    if(cnt==0) cout<<"NOT FOUND";
    else{
        for(int i=0; i<=10000; i++){
            if(b[i]) cout<<i<<' ';
        }
    }
    return 0;
}