///@author mann2108
///Problem : TWKNGS (Two Kings and Their Estate)

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pb push_back


ll dfs(ll u,vector<ll> adj[],ll a[]){
    for(ll v:adj[u]){
        if(a[v]>=a[u])continue;
        if(dfs(v,adj,a))return 0;
    }
    return 1;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;
        vector<ll> adj[n+1];
        ll a[n+1];
        ll u,v;
        for(ll i=0;i<n-1;i++){
            cin>>u>>v;
            adj[u].pb(v);
            adj[v].pb(u);
        }

        for(ll i=1;i<=n;i++)cin>>a[i];
        vector<ll> cities;
        for(ll i=1;i<=n;i++){
            if(!dfs(i,adj,a))cities.pb(i);
        }
        cout<<cities.size()<<endl;
        for(ll i=0;i<cities.size();i++)cout<<cities[i]<<" ";
        cout<<endl;
    }
}
