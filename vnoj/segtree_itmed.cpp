#include <iostream>
#define int long long
using namespace std;
int st[400001],n,k,a[100001];
void update(int node, int l, int r, int x, int v){
    if (l>x||r<x||l>r)
        return;
    if (l==r){
        st[node]=v;
        return;
    }
    int mid=(l+r)>>1;
    update(node<<1,l,mid,x,v);
    update(node<<1|1,mid+1,r,x,v);
    st[node]=max(st[node<<1],st[node<<1|1]);
}
int get(int node, int l, int r, int u, int v){
    if (l>v||r<u||l>r||u>v)
        return 0;
    if (l>=u&&r<=v)
        return st[node];
    int mid=(l+r)>>1;
    return max(get(node<<1,l,mid,u,v),get(node<<1|1,mid+1,r,u,v));
}
signed main(){
    cin >> n >> k;
    for (int i=1;i<=n;i++)
        cin >> a[i];
    update(1,1,n,n,a[n]);
    int res=max(0LL,a[n]);
    for (int i=n-1;i>=0;i--){
        int g=get(1,1,n,i+1,min(i+k,n));
        res=max(res,g+a[i]);
        update(1,1,n,i,g+a[i]);
    }
    cout << res;
}