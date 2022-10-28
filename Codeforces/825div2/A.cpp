#include<bits/stdc++.h>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while (T--){
        int n;
        int flag = 0;
        vector<int> v;
        cin>>n;
        int a1 = 0, a2 = 0, b1 = 0, b2 = 0;
        for (int i = 0; i<n; i++){
            int x;
            cin>>x;
            v.push_back(x);
            if (x == 1) a1++;
            else a2++;
        }
        for (int i = 0; i<n; i++){
            int x;
            cin>>x;
            if (x != v[i]) flag++;
            if (x == 1) b1++;
            else b2++;
        }
        if (flag > 0){
            if (flag == 1) cout<<1;
            else if (a1 == b1) cout<<1;
            else if (flag < 1 + min(abs(a1 - b1), abs(a2 - b2))) cout<<flag;
            else cout<<1 + min(abs(a1 - b1), abs(a2 - b2));
            cout<<"\n";
        }
        else{
            cout<<0<<"\n";
        }
    }
}
