#include                    <bits/stdc++.h>
using                       namespace std;
#define fi                  first
#define se                  second
#define pb(x)               push_back(x)
#define endl                cout<<"\n";
//#define int               long long
typedef pair<int, int>      ii;
typedef vector<int>         vi;
typedef long double         ldb;
const string F =            "sample";
const string IF =           F + ".inp";
const string OF =           F + ".out";
const ldb PI =              3.14159265358979;
const int maxN =            1e6;
const int mod  =            1e9 + 7;
void opf(bool c){           if (c == 1){	
freopen(IF.c_str(),         "r", stdin);
freopen(OF.c_str(),         "w", stdout);}}
// bool mem1;
// void clockt(){
// 	bool mem2;
// 	cerr << "\nMemory Cost: " << abs(&mem1 - &mem2) / 1024. / 1024. << "MB" << "\n";
// 	cerr << "Time Cost: " << clock() * 1000. / CLOCKS_PER_SEC << "MS" << "\n";
// }
/*--------------------------------------------------------------------------------*/

struct vec{
    ldb x, y;
    vec(ldb _x, ldb _y): x(_x), y(_y){};
    ldb len(){
        return sqrt(x*x + y*y);
    }
    ldb mul(const vec b){
        return x * b.x + y * b.y;
    }
};
 
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	opf(1);
    ldb x, y;
    cin >> x >> y;
    vec a(10, 0);
    vec b(x, y);
    ldb cAng = b.mul(a) / (a.len() * b.len());
    //cout << cAng;
    ldb ang = acos(cAng);
    cout << fixed << setprecision(10) <<  ang;
}
