#include<bits/stdc++.h>
using namespace std;
#define NMAX 10001
#define MOD 100000
void FASTINPUT(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
typedef long long ll;
typedef unsigned long long ull;
string s;
char l[3] = {'{', '[', '('}, r[3] = {'}', ']', ')'};
long long n, f[1001][1001];
void inp(){
    cin>>n>>s;
}

long long comp(int x, int y){
    if (x > y) return 1;
    long long t = f[x][y];
    if (t >= 0) return t;
    else t = 0;
    for (int i = x + 1; i<=y; i+=2){
        for (int j = 0; j < 3; j++){
            if (s[x]==l[j] || s[x] == '?'){
                if (s[i]==r[j] || s[i] == '?'){
                    t = (t + comp(x+1, i-1) * comp(i+1,y))%MOD;
                }
            }
        }
    }
    f[x][y] = t;
    return t;
}

void out(){
    memset(f, -1, sizeof(f));

    int ans = comp(0, n - 1)%MOD;
    if (ans == 4) cout<<"0000"<<ans;
    else cout<<ans;
}
int main(){
    FASTINPUT();
    inp();
    out();
}