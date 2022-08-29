#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
bool check1(int a, int b, int c, int d){
	if (a == 0 && c == 0) return 1;
	if (a*b<=0 && c == d) return 0;
	if (c*d<=0 && a == b) return 0;
	return 1;
}
inline int tdt(int a, int b, int c, int d){
	return abs(a-b) + abs(c-d);
}
pair<int, int> pts[100010];
bool check[100010];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while (T--){
	memset(check, 0, 100010);
	int n;
	cin>>n;
	for (int i = 0; i<n; i++){
		int x, y;
		cin>>x>>y;
		pts[i] = {x, y};
	}
	int curx = 0, cury = 0, ans = 0;
	for (int i = 0;i<n; i++){
		
		int MIN = 1e9;
		int VTMIN;
		for (int j = 0; j<n; j++){
			if (!check[j] && check1(curx, pts[j].fi, cury, pts[j].se)){
				if (tdt(curx, pts[j].fi, cury, pts[j].se) < MIN){
					MIN = tdt(curx, pts[j].fi, cury, pts[j].se);
					VTMIN = j;
				}
			}
		}
		ans = ans + abs(curx - pts[VTMIN].fi) + abs(cury - pts[VTMIN].se);
		check[VTMIN] = 1;
		curx = pts[VTMIN].fi;
		cury = pts[VTMIN].se;
	}
	ans = ans + abs(curx) + abs(cury);
	cout<<ans<<"\n";
	}
}