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
    point(){};
    point(ldb _x, ldb _y): x(_x), y(_y){};
    void out(){
        cout << "[" << x << ", " << y << "]\n";
    }
};
struct line{
    ldb a, b, c;
    line(ldb _a, ldb _b, ldb _c) : a(_a), b(_b), c(_c){};
    line(point pa, point pb){
        a = pb.y - pa.y;
        b = pa.x - pb.x;
        c = pb.x * pa.y - pb.y * pa.x;
    }
    void out(){
        cout << a << "x+" << b << "y+" << c << "=0\n";
    }
    void findIntersect(const line other){
        if (a/b == other.b/other.a){
            if (c == other.c) cout << "Lots of intersect";
            else cout << "No intersect";
        }
        else{
            ldb y = (a*other.c - other.a*c)/(other.a*b-a*other.b);
            ldb x = -(b * y + c)/ a;
            cout << x << " " << y;
        }
    }
    line perpendicularBisectorByline(point a, line b){
        ldb c = b.b * a.x - b.a * a.y;
        return line(-b.b, b.a, c);
    }
    line perpendicularBisector(point a, point b){
        line ab(a, b);
        ldb x = (a.x + b.x)/2;
        ldb y = (a.y + b.y)/2;
        ldb c = -(-ab.b * x) - (ab.a * y);
        return line(-ab.b, ab.a, c);
    }
    point findSymmetry(point a){
        point b(0, 0);
        line tmp = perpendicularBisectorByline(a, *this);

        return b;
    }
};
struct segment{
    point f, s;
    ldb len;
    segment(point a, point b){
        f = a;
        s = b;
        len = sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
    }
};
//------------------------------------------------------------------------------------
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    opf(0);
    int xa, ya, xb, yb;
    cin >> xa >> ya >> xb >> yb;
    point a(xa, ya);
    point b(xb, yb);
    segment ab(a, b);
    cout << fixed << setprecision(10) << ab.len;
}
