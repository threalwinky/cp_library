#include                    <bits/stdc++.h>
using                       namespace std;
#define fi                  first
#define se                  second
#define endl                cout<<"\n";

typedef pair<int, int>      ii;
typedef vector<int>         vi;
typedef long double         ldb;
// #define int               long long
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

struct point{
	int x, y;
	point(int _x, int _y): x(_x), y(_y){}
};

struct line{
	int a, b, c;
	line(int _a, int _b, int _c): a(_a), b(_b), c(_c){}
};

map<tuple<int, int, int>, vector<int>> m, m2;
map<pair<int, int>, int> p;
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	opf(1);
	int n;
	cin >> n;
	for (int i=1; i<=n; i++){
		int x, y;
		cin >> x >> y;
		m2[{1,0,-x}].push_back(y);
		m[{0,1,-y}].push_back(x);
		m[{1, -1, y-x}].push_back(x);
		m[{-1, -1, y+x}].push_back(x);
		p[{x, y}] = 1;
	}
	int ans = 0;
	for (auto &x : m){
		sort(x.se.begin(), x.se.end());
	}
	for (auto &x : m2){
		sort(x.se.begin(), x.se.end());
	}
	for (auto &x : m){
		if (x.se.size() > 1){
			int s = x.se.size();
			
			for (int i=0; i<s-1; i++){
				int a = get<0>(x.fi);
				int b = get<1>(x.fi);
				int c = get<2>(x.fi);
				point pa(x.se[i], (-a*x.se[i]-c)/b);
				point pb(x.se[i+1], (-a*x.se[i+1]-c)/b);
				if (pa.y == pb.y && (pa.x + pb.x) % 2 == 0){
					point pc((pa.x + pb.x)/2, pa.y + (pa.x + pb.x)/2 - pa.x);
					point pd((pa.x + pb.x)/2, pa.y - (pa.x + pb.x)/2 - pa.x);
					vector<int> it = m[{1, -1, pa.y - pa.x}];
					vector<int> it2 = m[{-1, -1, pb.y + pb.x}];
					// for (auto x : it) cout << x << " ";
					auto it3 = distance(it.begin(), lower_bound(it.begin(), it.end(), pa.x));
					auto it4 = distance(it.begin(), lower_bound(it.begin(), it.end(), pc.x));
					// cout << *it4 << "  " << *it3 << " ";
					auto it5 = distance(it.begin(), lower_bound(it2.begin(), it2.end(), pc.x));
					auto it6 = distance(it.begin(), lower_bound(it2.begin(), it2.end(), pb.x));
					if (p[{pc.x, pc.y}]) 
					if (it4 - it3 == 1 && it6 - it5 == 1 && it4 != it.size() && it6 != it2.size()) ans++;

					it = m[{-1, -1, pa.y + pa.x}];
					it2 = m[{1, -1, pb.y - pb.x}];
					// for (auto x : it2) cout << x << " ";
					it3 = distance(it.begin(), lower_bound(it.begin(), it.end(), pa.x));
					it4 = distance(it.begin(), lower_bound(it.begin(), it.end(), pd.x));
					it5 = distance(it.begin(), lower_bound(it2.begin(), it2.end(), pd.x));
					it6 = distance(it.begin(), lower_bound(it2.begin(), it2.end(), pb.x));
					if (p[{pd.x, pd.y}]) 
					if (it4 - it3 == 1 && it6 - it5 == 1 && it4 != it.size() && it6 != it2.size())ans++;
					
					// for (auto ii : it) cout << ii << " ";
					// cout << ac.a << " " << ac.b << " " << ac.c << "\n";
					// cout << bc.a << " " << bc.b << " " << bc.c << "\n";
					// cout << pa.x << " " << pa.y << " ";
					// cout << pb.x << " " << pb.y << " ";
					// cout << pc.x << " " << pc.y << " ";
					// cout << pd.x << " " << pd.y << "\n";
				}
				if (pa.y > pb.y){
					
					point pc(pa.x, pb.y);
					point pd(pb.x, pa.y);

					vector<int> it = m[{0, 1, -pb.y}];
					vector<int> it2 = m2[{1, 0, -pa.x}];
					// for (auto x : it2) cout << x << " ";
					auto it3 = distance(it.begin(), lower_bound(it.begin(), it.end(), pc.x));
					auto it4 = distance(it.begin(), lower_bound(it.begin(), it.end(), pb.x));
					auto it5 = distance(it.begin(), lower_bound(it2.begin(), it2.end(), pc.y));
					auto it6 = distance(it.begin(), lower_bound(it2.begin(), it2.end(), pa.y));
					if (p[{pc.x, pc.y}]) 
					if (it4 - it3 == 1 && it6 - it5 == 1 && it4 != it.size() && it6 != it2.size()) ans++;

					it = m[{0, 1, -pa.y}];
					it2 = m2[{1, 0, -pb.x}];
					// for (auto x : it) cout << x << " ";
					it3 = distance(it.begin(), lower_bound(it.begin(), it.end(), pa.x));
					it4 = distance(it.begin(), lower_bound(it.begin(), it.end(), pd.x));
					it5 = distance(it.begin(), lower_bound(it2.begin(), it2.end(), pb.y));
					it6 = distance(it.begin(), lower_bound(it2.begin(), it2.end(), pd.y));
					if (p[{pd.x, pd.y}]) 
					if (it4 - it3 == 1 && it6 - it5 == 1 && it4 != it.size() && it6 != it2.size()) ans++;
					// cout << pa.x << " " << pa.y << " ";
					// cout << pb.x << " " << pb.y << " ";
					// cout << pc.x << " " << pc.y << " ";
					// cout << pd.x << " " << pd.y << "\n";
					
				}
				if (pa.y < pb.y){
					
					point pc(pa.x, pb.y);
					point pd(pb.x, pa.y);

					vector<int> it = m[{0, 1, -pa.y}];
					vector<int> it2 = m2[{1, 0, -pb.x}];
					// for (auto x : it2) cout << x << " ";
					auto it3 = distance(it.begin(), lower_bound(it.begin(), it.end(), pa.x));
					auto it4 = distance(it.begin(), lower_bound(it.begin(), it.end(), pd.x));
					auto it5 = distance(it.begin(), lower_bound(it2.begin(), it2.end(), pd.y));
					auto it6 = distance(it.begin(), lower_bound(it2.begin(), it2.end(), pb.y));
					if (p[{pd.x, pd.y}]) 
					if (it4 - it3 == 1 && it6 - it5 == 1 && it4 != it.size() && it6 != it2.size()) ans++;

					it = m[{0, 1, -pb.y}];
					it2 = m2[{1, 0, -pa.x}];
					
					it3 = distance(it.begin(), lower_bound(it.begin(), it.end(), pc.x));
					it4 = distance(it.begin(), lower_bound(it.begin(), it.end(), pb.x));
					it5 = distance(it.begin(), lower_bound(it2.begin(), it2.end(), pa.y));
					it6 = distance(it.begin(), lower_bound(it2.begin(), it2.end(), pc.y));
					if (p[{pc.x, pc.y}]) 
					if (it4 - it3 == 1 && it6 - it5 == 1 && it4 != it.size() && it6 != it2.size()){
						// for (auto x : it) cout << x << " ";
						// cout << pb.x;
						// cout << it3;
						ans++;
					}
					// cout << pa.x << " " << pa.y << " ";
					// cout << pb.x << " " << pb.y << " ";
					// cout << pc.x << " " << pc.y << " ";
					// cout << pd.x << " " << pd.y << "\n";
					
				}
			}
		}
	}
	for (auto &x : m2){
		if (x.se.size() > 1){
			int s = x.se.size();
			for (int i=0; i<s-1; i++){
				int a = get<0>(x.fi);
				int b = get<1>(x.fi);
				int c = get<2>(x.fi);
				point pa((-b*x.se[i] - c)/a, x.se[i]);
				// cout << pa.x;
				point pb((-b*x.se[i + 1] - c)/a, x.se[i+1]);
				if (pa.x == pb.x && (pa.y + pb.y) % 2 == 0){
					point pc({pa.x + (pa.y + pb.y)/2 - pa.y, (pa.y + pb.y)/2});
					point pd({pa.x - (pa.y + pb.y)/2 - pa.y, (pa.y + pb.y)/2});
					vector<int> it = m[{1, -1, pa.y - pa.x}];
					vector<int> it2 = m[{-1, -1, pb.y + pb.x}];
					// for (auto x : it) cout << x << " ";
					auto it3 = distance(it.begin(), lower_bound(it.begin(), it.end(), pa.x));
					auto it4 = distance(it.begin(), lower_bound(it.begin(), it.end(), pc.x));
					auto it5 = distance(it.begin(), lower_bound(it2.begin(), it2.end(), pb.x));
					auto it6 = distance(it.begin(), lower_bound(it2.begin(), it2.end(), pc.x));
					if (p[{pc.x, pc.y}]) 
					if (it4 - it3 == 1 && it6 - it5 == 1 && it4 != it.size() && it6 != it2.size()) ans++;

					it = m[{-1, -1, pa.y + pa.x}];
					it2 = m[{1, -1, pb.y - pb.x}];

					// for (auto x : it2) cout << x << " ";
					it3 = distance(it.begin(), lower_bound(it.begin(), it.end(), pd.x));
					it4 = distance(it.begin(), lower_bound(it.begin(), it.end(), pa.x));
					it5 = distance(it.begin(), lower_bound(it2.begin(), it2.end(), pd.x));
					it6 = distance(it.begin(), lower_bound(it2.begin(), it2.end(), pb.x));
					if (p[{pd.x, pd.y}]) 
					if (it4 - it3 == 1 && it6 - it5 == 1 && it4 != it.size() && it6 != it2.size()) ans++;
					
					
					// cout << ac.a << " " << ac.b << " " << ac.c << "\n";
					// cout << bc.a << " " << bc.b << " " << bc.c << "\n";
					// cout << pa.x << " " << pa.y << " ";
					// cout << pb.x << " " << pb.y << " ";
					// cout << pc.x << " " << pc.y << " ";
					// cout << pd.x << " " << pd.y << "\n";
				}
			}
		}
	}
	// for (auto x : m){
	// 	cout << get<0>(x.fi) << " " << get<1>(x.fi) << " " << get<2>(x.fi) << " : " ;
	// 	for (auto y : x.se){
	// 		cout << y << " ";
	// 	}
	// 	cout << "\n";
	// }
	cout << ans;
}