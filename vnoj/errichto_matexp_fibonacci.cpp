#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;

struct M{
    vector<vector<int>> data;
    int row, col;
    M(vector<vector<int>> _data):data(_data){
        row = data.size();
        col = data[0].size();
    }
    M(int r, int c){
        vector<int> tmp(c, 0);
        data.resize(r, tmp);
        row = r;
        col = c;
    }
    
    M operator * (const M &b) const{
        M tmp(row, b.col);

        for (int i=0; i<row; i++){
            for (int j=0; j<b.col; j++){
                for (int k=0; k<col ;k++){
                    tmp.data[i][j] = (tmp.data[i][j]%mod + data[i][k]%mod*b.data[k][j]%mod)%mod;
                }
            }
        }

        return tmp;
    }

    M supow(M a, int b){
        if (b == 0){
            M tmp({
                {1, 0},
                {0, 1}
            });
            return tmp;
        }
        if (b == 1) return a;
        M tmp = supow(a, b/2);
        if (b & 1) return tmp*tmp*a;
        return tmp*tmp;
    }

    friend ostream & operator << (ostream &out, M a){
        for (auto x : a.data){
            for (auto y : x) cout << y;
            cout << "\n";
        }
        return out;
    }
};

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    M a({
        {1, 1},
        {1, 0}
    });
    M b(2, 1);
    b.data[0][0] = 0;
    b.data[1][0] = 1;
    int n;
    cin >> n;
    M c = a.supow(a, n + 1) * b;
    cout << c.data[1][0];
}