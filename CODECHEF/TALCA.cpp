/** LCA PRACTICE FINAL in O(LOG N) with O(N) Preprocessing */
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pb push_back

const ll MAX = 3*(1e5)+1;

vector<ll> adj[MAX];
vector<bool> visited(MAX,false);
vector<ll> depth(MAX,-1);
vector<ll> eulerTour;
map<ll,ll> firstIndex;
ll segTree[4*MAX];

void dfs(ll u,ll d=1){
    eulerTour.pb(u);
    visited[u]=true;
    depth[u]=d;
    for(ll v:adj[u]){
        if(!visited[v]){
            dfs(v,d+1);
            eulerTour.pb(u);
        }
    }
}

void build(ll a[],ll v,ll tl,ll tr){
    if(tl==tr)segTree[v]=a[tl];
    else{
        ll tm = (tl+tr)/2;
        build(a,2*v,tl,tm);
        build(a,2*v+1,tm+1,tr);
        if(depth[segTree[2*v]]<depth[segTree[2*v+1]]){
            segTree[v]=segTree[2*v];
        }
        else{
            segTree[v]=segTree[2*v+1];
        }
    }
}


ll query(ll v,ll tl,ll tr,ll l,ll r){
    if(tl>r or tr<l)return -1;
    if(tl>=l and tr<=r)return segTree[v];
    ll tm = (tl+tr)/2;
    ll left = query(2*v,tl,tm,l,r);
    ll right = query(2*v+1,tm+1,tr,l,r);
    if(left==-1)return right;
    if(right==-1)return left;
    return depth[left]<depth[right]?left:right;
}


ll lca(ll u,ll v){
    if(firstIndex[u]>firstIndex[v])swap(u,v);
    return query(1,1,eulerTour.size(),firstIndex[u],firstIndex[v]);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    ll u,v;
    for(ll i=1;i<n;i++){
        cin>>u>>v;
        adj[v].pb(u);
        adj[u].pb(v);
    }

    dfs(1);
    n = eulerTour.size();
    ll a[n+1];
    a[0]=INT_MIN;

    for(ll i=0;i<n;i++){
        a[i+1]=eulerTour[i];
    }

    for(ll i=1;i<=n;i++)
        if(!firstIndex[a[i]])
            firstIndex[a[i]]=i;

    build(a,1,1,n);

    ll q;
    cin>>q;
    while(q--){
        ll r;
        cin>>r>>u>>v;
        ll uv = lca(u,v);
        ll ru = lca(r,u);
        ll rv = lca(r,v);
        ll ruv = lca(r,uv);

        if(ruv!=uv){
            cout<<uv<<endl;
        }
        else{
            if(ru==uv and rv==uv)cout<<uv<<endl;
            else if(rv==uv)cout<<ru<<endl;
            else if(ru==uv)cout<<rv<<endl;
        }
    }
}