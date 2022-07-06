#include<bits/stdc++.h>
using namespace std;
string str1,str2;
stack <char> xaucon;
int xc[255][255];
/*void xuat(int n, int m){
    for (int i = 0 ; i< xc[n][m] ;i++){
        cout<<xaucon.top();
        xaucon.pop();
    }
}*/
void lapbang(int n, int m){
    xc[0][0] = 0;
    for (int i = 0; i< m; i++) xc[0][i+1]=0;
    for (int i = 0; i< n; i++) xc[i+1][0]=0;
    for (int i = 1; i< n+1; i++)
        for (int j = 1; j< m+1; j++)
            if (str1[j-1] == str2[i-1]) xc[i][j] = xc[i-1][j-1]+1;
            else{
                if (xc[i-1][j] > xc[i][j-1]) xc[i][j] = xc[i-1][j];
                else xc[i][j] = xc[i][j-1];
            }
}
/*void truyvet(int n, int m){
    while (n*m!=0){
        if (str1[m-1] == str2[n-1]) {
            xaucon.push(str1[m-1]);
            m-=1;n-=1;
        }
        else {
            if (xc[n-1][m] >= xc[n][m-1]) n-=1;
            else m-=1;
        }
    }
}*/
void inp(){
    cin>>str1;
    cin>>str2;
}
void out(){
    int m = str1.length(), n = str2.length();
    lapbang(n,m);
    /*truyvet(n,m);
    xuat(n,m);*/
    for (int i = 0; i<=m; i++){
        for (int j = 0; j<=n;j++)
            cout<<xc[i][j];
        cout<<endl;
    }
    cout<<xc[m][n];
}
int main(){
    inp();
    out();
}