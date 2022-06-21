#include<bits/stdc++.h>
using namespace std;
#define f0 for (int i = 0; i<10; i++)
#define fi first
#define se second
pair<int,int> v[11];
bool check1 = 0;
int m,n,temp;
string s;
void inp(){
    cin>>m>>n;
}
bool check(int a,int b,int c,int d){
    int temp1 = 0,temp2 = 0;
    temp1+=v[a].fi;
    temp1+=v[b].fi;
    temp1+=v[c].fi;
    temp1+=v[d].fi;
    temp2+=v[a].se;
    temp2+=v[b].se;
    temp2+=v[c].se;
    temp2+=v[d].se;
    //cout<<a<<b<<c<<d<<" "<<temp1<<" "<<temp2<<endl;
    if (temp1 == m && temp2 == n) return true;
    else return false;
}
void xuly(){
    for (int i = 0; i<3; i++){
        if (i==0) temp = 10;
        else temp = i;
        for (int j = 0; j<10;j++){
            for (int k = 0; k<6; k++){
                for (int l = 0; l<10;l++){
                    check1 = check(temp,j,k,l);
                    if (check1){
                    if (i == 0) cout<<j<<":"<<k<<l;
                    else 
                    cout<<i<<j<<":"<<k<<l;
                    break;
                    }
                }
                if (check1) break;
            }
            if (check1) break;
        }
        if (check1) break;
    }
}
void xd(){
    v[0] = {4,2};v[1] = {2,0};
    v[2] = {2,3};v[3] = {2,3};
    v[4] = {3,1};v[5] = {2,3};
    v[6] = {3,3};v[7] = {2,1};
    v[8] = {4,3};v[9] = {3,3};
    v[10] = {0,0};
    if (m>14||n>12) cout<<"0:00";
    else xuly();
}
void out(){
    
    //f0 dc[v[i].fi].push_back(i);
    //f0 ng[v[i].se].push_back(i);
    xd();
}
int main(){
    freopen("thoigian.inp", "r", stdin);
    inp();
    out();
}