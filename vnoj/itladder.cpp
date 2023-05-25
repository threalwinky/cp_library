#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN = 1e6 + 9;
const int MOD = 1e9 + 7;
int st[maxN], lazy1[4*maxN], lazy2[4*maxN];
void fix1(int id, int l, int r)
{
    if (!lazy1[id]) return;
    st[id] += 1ll*lazy1[id]*(r - l + 1);
    if (l != r)
    {
        lazy1[id*2] += lazy1[id];
        lazy1[id*2+1] += lazy1[id];
    }
    //else{
        //cout<<1<<":"<<l<<"---->"<<r<<" "<<lazy1[id]<<"\n";
    //}
    lazy1[id] = 0;
}

void fix2(int id, int l, int r)
{
    if (!lazy2[id]) return;
    int prf1 = (l*(l-1))/2;
    int prf2 = ((r+1)*(r))/2;
    //cout<<"\n"<<l<<"--->"<<r<<" "<<lazy2[id]<<"\n";
    st[id] += lazy2[id] * (prf2 - prf1);
    if (l != r)
    {
        lazy2[id*2] += lazy2[id];
        lazy2[id*2+1] += lazy2[id];
    }
    //else{
        //cout<<2<<":"<<l<<"---->"<<r<<" "<<lazy1[id]<<"\n";
    //}
    lazy2[id] = 0;
}

void update(int id, int l, int r, int u, int v, int a, int b)
{
    fix1(id, l, r);
    fix2(id, l, r);
    if (l > v || r < u) return;
    if (l >= u && r <= v)
    {
        //cout<<l<<" "<<r<<"\n";
        lazy1[id] += lazy1[id] + 1ll*b - 1ll *a*u;
        lazy2[id] += a;
        fix1(id, l, r);
        fix2(id, l, r);
        return;
    }
    int m = l + (r - l)/2;
    update(id*2, l, m, u, v, a, b);
    update(id*2+1, m+1, r, u, v, a, b);
    st[id] = (st[id*2] + st[id*2+1])%MOD;
}

int get(int id, int l, int r, int u, int v)
{
    fix1(id, l, r);
    fix2(id, l, r);
    if (l > v || r < u) return 0;
    if (l >= u && r <= v){
        return st[id];
    }
    int m = l + (r - l)/2;
    int get1 = get(id*2, l, m, u, v);
    int get2 = get(id*2+1, m+1, r, u, v);
    return (get1%MOD + get2%MOD)%MOD;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("winky.inp", "r",stdin);
    int n, q;
    cin>>n>>q;
    while (q--)
    {
        int x;
        cin>>x;
        if (x == 1)
        {
            int l, r, a, b;
            cin>>l>>r>>a>>b;
            update(1, 1, n, l, r, a, b);
            //for (int i = 1; i<=n; i++) cout<<get(1, 1, n,i , i)<<" ";
        }
        else
        {
            int l, r;
            cin>>l>>r;
            cout<<get(1, 1, n, l, r)<<"\n";
        }
    }
}
