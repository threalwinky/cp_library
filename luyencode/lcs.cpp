#include<iostream>
#include<string>
using namespace std;
int m,n, lcs[2501][2501];
string s1,s2;
int main(){
    cin>>m>>n>>s1>>s2;
    
    for (int i = 1; i<=m; i++){
        for (int j = 1; j<=n; j++){
            if (s1[i-1] == s2[j-1]) lcs[i][j] = lcs[i-1][j-1] +1;
            else{
                lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1]);
            }
        }
    }
    /*for (int i = 0; i<=m; i++){
        for (int j = 0; j<=n; j++){
            cout<<lcs[i][j]<<" ";
        }
        cout<<endl;
    }*/
    cout<<lcs[m][n];
}