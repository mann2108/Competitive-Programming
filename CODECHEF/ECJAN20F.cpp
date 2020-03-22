///@author mann2108
///Problem : ECJAN20F

#include<bits/stdc++.h>
#define pb push_back
#define IO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long int ll;

bool sorted1(ll p1,ll p2){return p1>p2;}
bool sorted2(pair<ll,ll> p1,pair<ll,ll> p2){return p1.first>p2.first;}

void debug(ll temp=1){cout<<"Debug: "<<temp<<endl;}

ll in[2*(ll)1e5+10],out[2*(ll)1e5+10];
ll tree[8*((ll)1e5+10)];
ll b[(ll)1e5+10];
ll a[2*(ll)1e5+10];
ll time1=0;
vector<ll> adj[(ll)1e5+10];
vector<bool> visited((ll)1e5+10,false);

void dfs(ll u){
    visited[u]=true;
    a[time1]=b[u];
    in[u]=time1++;
    for(ll v:adj[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
    a[time1]=-b[u];
    out[u]=time1++;
}

void build(ll v,ll tl,ll tr){
    if(tl==tr){
        tree[v]=a[tl];
    }
    else{
        ll mid = (tl+tr)/2;
        build(2*v,tl,mid);
        build(2*v+1,mid+1,tr);
        tree[v]=tree[2*v]+tree[2*v+1];
    }
}


ll query(ll v, ll tl,ll tr,ll l,ll r){
    if(tl==l and tr==r)return tree[v];
    ll mid = (tl+tr)/2;
    if(mid>=r)return query(2*v,tl,mid,l,r);
    else if(mid<l) return query(2*v+1,mid+1,tr,l,r);
    else return (query(2*v,tl,mid,l,mid)+query(2*v+1,mid+1,tr,mid+1,r));
}

ll update(ll v,ll tl,ll tr,ll ind,ll val){
    if(tl==tr){
        tree[v]=val;
    }
    else{
        ll mid=(tl+tr)/2;
        if(ind<=mid)update(2*v,tl,mid,ind,val);
        else update(2*v+1,mid+1,tr,ind,val);
        tree[v] = tree[2*v]+tree[2*v+1];
    }
}


int main(){
    IO;
    ll n,q;
    cin>>n>>q;
    ll u,v;

    for(ll i=0;i<n-1;i++){
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    for(ll i=1;i<=n;i++)cin>>b[i];
    dfs(1);

    a[in[1]]=0;
    a[out[1]]=0;

    build(1,0,time1);

    while(q--){

        ll choice;
        cin>>choice;
        if(choice==1){

            ll x;
            cin>>x;
            cout<<query(1,0,time1,0,out[x]-1)<<endl;
        }
        else{
            ll x,val;
            cin>>x>>val;
            if(x==1)continue;
            ll val1 = a[in[x]]+val;
            update(1,0,time1,in[x],val1);
            a[in[x]]=val1;
            ll val2 = a[out[x]]-val;
            update(1,0,time1,out[x],val2);
            a[out[x]]=val2;
        }
    }
}
