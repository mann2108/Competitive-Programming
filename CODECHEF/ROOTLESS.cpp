#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

const ll MAX = 3*(1e5+100);

vector<ll> adj[4*MAX];
vector<ll> visited;
vector<ll> eulerTour;
vector<ll> depth;
ll firstIndex[MAX+10];
ll segTree[4*MAX+10];

void dfs(ll u,ll d=1){
    depth[u]=d;
    eulerTour.push_back(u);
    visited[u]=true;
    for(ll v:adj[u]){
        if(!visited[v]){
            dfs(v,d+1);
            eulerTour.push_back(u);
        }
    }
}

void build(ll a[],ll v,ll tl, ll tr){
    if(tl==tr){
        segTree[v]=a[tl];
    }
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

ll query(ll v, ll tl, ll tr, ll l,ll r){
    if(tl>r or tr<l){
        return -1;
    }
    if(tl>=l and tr<=r){
        return segTree[v];
    }

    ll mid = (tl+tr)/2;
    ll left = query(2*v,tl,mid,l,r);
    ll right = query(2*v+1,mid+1,tr,l,r);

    if(left==-1)return right;
    if(right==-1)return left;

    return depth[left]<depth[right]?left:right;

}

ll lca(ll u,ll v){
    if(firstIndex[u]>firstIndex[v])swap(u,v);
    return query(1,1,eulerTour.size(),firstIndex[u],firstIndex[v]);
}


int main(){
    ll n,q;
    cin>>n>>q;
    visited.assign(n+1,false);
    depth.assign(n+1,-1);
    ll u,v;
    ll m=n-1;
    for(ll i=0;i<m;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1);

    ll a[eulerTour.size()+1];
    a[0]=INT_MIN;
    for(ll i=0;i<eulerTour.size();i++){
        a[i+1]=eulerTour[i];
    }
    n=eulerTour.size();

    build(a,1,1,n);


    map<ll,ll> mp;
    for(ll i=1;i<=n;i++){
        if(!mp[a[i]]){
            mp[a[i]]=1;
            firstIndex[a[i]]=i;
        }
    }
    while(q--){
        ll r;
        cin>>r>>u>>v;
        ll uv = lca(u,v);
        ll ru = lca(r,u);
        ll rv = lca(r,v);
        ll ruv = lca(r,uv);

        /*if(ruv!=uv){
            cout<<uv<<endl;
        }
        else{
            if(ru==uv and rv==uv)cout<<uv<<endl;
            else if(rv==uv)cout<<ru<<endl;
            else if(ru==uv)cout<<rv<<endl;
        }
        */

        if(uv==ru){
            ll ans1 = depth[u]+depth[rv]-2*depth[lca(u,rv)];
            ll ans2 = depth[v]+depth[rv]-2*depth[lca(v,rv)];
            cout<<ans1<<" "<<ans2<<endl;
        }
        else if(rv==ru){
            ll ans1 = depth[u]+depth[uv]-2*depth[lca(u,uv)];
            ll ans2 = depth[v]+depth[uv]-2*depth[lca(v,uv)];
            cout<<ans1<<" "<<ans2<<endl;
        }
        else{
            ll ans1 = depth[u]+depth[ru]-2*depth[lca(u,ru)];
            ll ans2 = depth[v]+depth[ru]-2*depth[lca(v,ru)];
            cout<<ans1<<" "<<ans2<<endl;
        }

    }
}