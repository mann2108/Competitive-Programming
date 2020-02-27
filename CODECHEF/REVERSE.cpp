#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n,m;
    cin>>n>>m;

    vector<vector<pair<ll,ll> > > adj;
    vector<pair<ll,ll> > vec;
    for(ll i=0;i<=n;i++)adj.push_back(vec);

    vector<ll> d(n+1,INT_MAX);
    //vector<ll> p(n+1,INT_MAX);
    ll x,y;
    while(m--){
        cin>>x>>y;
        adj[x].push_back({y,0});
        adj[y].push_back({x,1});
    }

    set<pair<ll,ll> > q;
    q.insert({0,1});
    d[1]=0;
    while(!q.empty()){
        ll v=q.begin()->second;
        q.erase(q.begin());
        for(auto edge:adj[v]){
            ll u=edge.first;
            ll len=edge.second;

            if(d[v]+len<d[u]){
                q.erase({d[u],u});
                d[u]=d[v]+len;
                q.insert({d[v]+len,u});
            }
        }
    }
    if(d[n]==INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<<d[n]<<endl;
    }
}