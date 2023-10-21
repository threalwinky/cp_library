#include                    <bits/stdc++.h>
using                       namespace std;
#define fi                  first
#define se                  second
#define endl                cout<<'\n';
//Data types macros
//#define int                 long long //uncomment if needed
using ll =                  long long;
using ull =                 unsigned long long;
using ldb =                 long double; //or double if TL is tight
using str =                 string; //python type
using ii =                  pair<int, int>;
using mii =                 map<int, int>;
#define mp                  make_pair
#define tcT                 template<class T
#define tcTU                tcT, class U
tcT > using V =             vector<T>;
using vi =                  V<int>;
using vb =                  V<bool>;
using vll =                 V<ll>;
using vull =                V<ull>;
using vldb =                V<ldb>;
using vii =                 V<ii>;
using vstr =                V<str>;
//Vector functions
#define sz(x)               (int)(x.size())
#define bg(x)               x.begin()
#define all(x)              bg(x), x.end
#define rall(x)             x.rbegin(), x.rend()
#define grt                 greater<int>()
#define ft                  front
#define bk                  back
#define pb                  push_back
#define lb(v,x)             lower_bound(all(v),x)
#define ub(v,x)             upper_bound(all(v),x)
#define ld(v,x)             lower_bound(rall(v),x,grt);
#define ud(v,x)             upper_bound(rall(v),x,grt);
//Loops
#define FOR(i,a,b)          for (int i=(a); i<(b); i++)
#define FORD(i,a,b)         for (int i=(a)-1; i>=(b); i--)
#define F0R(i,a)            FOR(i,0,a)
#define F0RD(i,a)           FORD(i,0,a)
#define FORE(i,a)           for (auto i:a)
//File accessing
const string FI =           "sample";
const string IFI =          FI + ".inp";
const string OFI =          FI + ".out";
void opf(bool c){           if (c == 1){
freopen(IFI.c_str(),        "r", stdin);
freopen(OFI.c_str(),        "w", stdout);}}
//Constants
const ldb PI =              3.14159265358979;
const int maxI =            INT_MAX;
const ll maxll =            LLONG_MAX;
const int N =               1e6;
const int mod  =            1e9 + 7;
mt19937 rng((uint32_t)chrono::steady_clock::now().time_since_epoch().count());
//------------------------------------------------------------------------------------
//Code here

const ldb eps = 1e-9;
bool eq(ldb a, ldb b){ return fabs(a-b) < eps; }
struct Point{
    ldb x=0, y=0;
    Point(){}
    Point(ldb x, ldb y):x(x), y(y){}
    ldb Edist(const Point o){
        return sqrt((x-o.x)*(x-o.x)+(y-o.y)*(y-o.y));
    }
    ldb squareEdist(const Point o){
        return (x-o.x)*(x-o.x)+(y-o.y)*(y-o.y); }
    ldb Mdist(const Point o){
        return abs(x-o.x)+abs(y-o.y);
    }
    Point Mpoint(const Point o){
        return Point((x+o.x)/2, (y+o.y)/2);
    }
    bool ccw(const Point n, const Point m){
        return (n.x-x)*(m.y-y)-(m.x-x)*(n.y-y) > 0; }
    bool operator == (const Point o){
        return eq(x,o.x) & eq(y,o.y);
    }
    friend ostream& operator << (ostream &os, Point a){
        os << "Point( " << a.x << ", " << a.y << " )";
        return os;
    }
};

struct Vector{
    ldb a=0, b=0;
    Vector(){}
    Vector(Point x, Point y):a(y.x-x.x), b(y.y-x.y){}
    Vector(ldb a, ldb b): a(a), b(b){}
    ldb len(){ return sqrt(a*a+b*b); }
    Vector operator + (const Vector o){
        return Vector(a+o.a, b+o.b);}
    Vector operator - (const Vector o){
        return *this + Vector(-o.a, -o.b); }
    ldb dotProduct(const Vector o){
    /*also equal to |u|*|v|*cos */
        return a*o.a+b*o.b; }
    ldb crossProduct(const Vector o){
    /*also equal to |u|*|v|*sin */
    /*also equal to vec(n)*|u|*|v|*sin in 3D space */
        return a*o.b-o.a*b; }
    ldb angle(Vector o){
        return dotProduct(o)/(len()*o.len()); }
    bool operator == (const Vector o){
        return eq(a,o.a)&eq(b,o.b); }
    friend ostream& operator << (ostream &os, Vector a){
        os << "Vector( " << a.a << ", " << a.b << " )";
        return os;
    }
};

struct Line{
    ldb a=0, b=0, c=0;
    Line(){}
    Line(ldb a, ldb b, ldb c):a(a), b(b), c(c){}
    Line(Point x, Point y){
        a = y.y - x.y;
        b = x.x - y.x;
        c = -a*x.x-b*x.y;
    }
    ldb distP(const Point x){
        return abs(a*x.x+b*x.y+c)/sqrt(a*a+b*b); }
    ldb have(const Point x){

        return distP(x) == 0; }
    pair<ldb, ldb> Intersect(const Line o){
        pair<ldb, ldb> res;
        res.se = (a*o.c-c*o.a)/(-a*o.b+b*o.a);
        res.fi = (-b*res.se-c)/a;
        return res;
    }
    Line perpendicularBisector (const Point o){
        return Line (-b, a, b*o.x-a*o.y); }
    friend ostream& operator << (ostream &os, Line a){
        os << "Line( " << a.a << ", " << a.b << ", " << a.c << " )";
        return os;
    }
};

ldb distR(ldb xa, ldb ya,ldb xb,ldb yb,ldb xc,ldb yc){
    Point a(xa, ya);
    Point b(xb, yb);
    Point c(xc, yc);
    Vector ba(b, a);
    Vector bc(b, c);
    Line lbc(b, c);
    if (ba.dotProduct(bc) < 0){
        return -1;
    }
    return lbc.distP(a);
}

//------------------------------------------------------------------------------------
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    opf(0);
    Point p, o, t;
    cin >> p.x >> p.y;
    cin >> o.x >> o.y;
    cin >> t.x >> t.y;
    Line ot(o, t);
    if (distR(p.x, p.y, o.x, o.y, t.x, t.y) == -1){
        cout << "NO";
    }
    else{
        if (distR(p.x, p.y, o.x, o.y, t.x, t.y) == 0){
            cout << "YES";
        }
        else cout << "NO";
    }
}
