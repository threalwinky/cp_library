#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 111539786;
struct M{
    vector<vector<int>> data;
    int row, col;
    M(int r, int c){
        vector<int> tmp(c, 0);
        data.resize(r, tmp);
        row = data.size();
        col = data[0].size();
    }
    M(vector<vector<int>> _data):data(_data){
        row = data.size();
        col = data[0].size();
    }
    M rev(M a){
        M tmp(a.col, a.row);
        for (int i=0; i<a.col; i++){
            for (int j=0; j<a.row; j++){
                tmp.data[col- 1 - i][j] = a.data[j][i];
            }
        }
        return tmp;
    }
    friend ostream & operator <<(ostream &out, M a){
        for (auto x : a.data){
            for (auto y : x){
                cout << y << " ";
            }
            cout << "\n";
        }
        return out;
    }
    M operator * (const M& b){
        M tmp(row, b.col);

        for (int i=0; i<row; i++){
            for (int j=0; j<b.col; j++){
                for (int k=0; k<col; k++){
                    tmp.data[i][j] += (data[i][k]%mod*b.data[k][j]%mod)%mod;
                }
            }
        }

        return tmp;
    }
    M supow(M a, int b){
        if (b == 0){
            M c({
                {1, 0},
                {0, 1}
            });
            return c;
        }
        if (b == 1) return a;
        //cout << b << " ";
        M tmp = supow(a, b/2);
        if (b & 1) return tmp*tmp*a;
        return tmp*tmp;
    }
};

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    M a({
        {1, 1},
        {1, 0}
    });
    M b({
        {1, 1},
    });
    b = b.rev(b);
    int q;
    cin >> q;
    while (q--){
        int n;
        cin >> n;
        M c = a.supow(a, n) * b;
        cout << c.data[1][0]%mod << "\n";
    }
}