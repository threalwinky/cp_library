#include                    <bits/stdc++.h>
using                       namespace std;
//#define int               long long
#define fi                  first
#define se                  second
#define pb(x)               push_back(x)
#define endl                cout<<"\n";
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
//------------------------------------------------------------------------------------
//Code here
struct point{
    ldb x, y;
    point(ldb _x, ldb _y): x(_x), y(_y){}
};

struct line{
    ldb a, b, c;
    line(point pa, point pb){
        a = pb.y - pa.y;
        b = pa.x - pb.x;
        c = pa.y*pb.x - pa.x*pb.y;
    }
};

struct segment{
    ldb len;
    segment(point pa, point pb){
        len = sqrt((pa.x-pb.x)*(pa.x-pb.x)+(pa.y-pb.y)*(pa.y-pb.y));
    }
};

//------------------------------------------------------------------------------------
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    opf(1);
    ldb xx, yx; cin >> xx >> yx;
    point x(xx, yx);
    ldb xy, yy; cin >> xy >> yy;
    point y(xy, yy);
    ldb xz, yz; cin >> xz >> yz;
    point z(xz, yz);
    line lxy(x, y);
    line lxz(x, z);
    segment sxy(x, y);
    cout << sxy.len;
}
