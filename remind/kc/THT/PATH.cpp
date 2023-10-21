#include                    <bits/stdc++.h>
using                       namespace std;
#define fi                  first
#define se                  second
#define pb(x)               push_back(x)
#define endl                cout<<"\n";
//#define int               long long
typedef pair<int, int>      ii;
typedef vector<int>         vi;
const string F =            "sample";
const string IF =           F + ".inp";
const string OF =           F + ".out";
const int inf =             INT_MAX - 100000;
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


struct Vertice{
	int v, w;
};

vector<Vertice> r[1009], b[1009];
vector<pair<int, int>> d;

void stp(int s, int t){
	d.resize(t + 1, {inf, inf});
	d[s]={0,0};
	queue<pair<int, int>> q;
    q.push({s,1});
    q.push({s,-1});
    int c = 0;
    while (!q.empty()){
    	int size=q.size();
    	for(int i=0;i<size;i++){
           	auto it=q.front();
			q.pop();
			int node=it.fi;
			int edge=it.se;
			if(edge==1){
				for(auto x:b[node]){
					if(d[x.v].se>d[node].fi+x.w){
						d[x.v].se=d[node].fi+x.w;
						q.push({x.v,-1});
					}
				}
			}
			else{
				for(auto x:r[node]){
					if(d[x.v].fi>d[node].se+x.w){
						d[x.v].fi=d[node].se+x.w;
						q.push({x.v,1});
					}
				}
			}
		}
	}
}

signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	opf(0);
	int n, m;
	cin >> n >> m;
	for (int i=1; i<=m; i++){
		int x, y, w, t;
		cin >> x >> y >> w >> t;
		if (t == 1){ 
			b[x].push_back({y, w});
			b[y].push_back({x, w});
		}
		else{
			r[x].push_back({y, w});
			r[y].push_back({x, w});
		}
	}
	stp(1, n);
	// int i = 0;
	// for (auto x : d){
	// 	cout << i++ << " " << x.fi << " " << x.se << " " << '\n';
	// }
	cout << min(d[n].fi, d[n].se);
}