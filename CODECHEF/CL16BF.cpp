#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod=1000000007;
vector<ll> topoSort;
vector<ll> adj[100005];
vector<bool> visited;

void dfs(ll u){
    visited[u]=true;
    for(ll v:adj[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
    topoSort.push_back(u);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    cin>>n>>m;
    ll p,q;
    cin>>p>>q;
    ll u,v;

    while(m--){
        cin>>u>>v;
        adj[u].push_back(v);
    }

    visited.assign(n+1,false);

    for(ll i=1;i<n;i++){
        if(!visited[i]){
            dfs(i);
        }
    }

    //reverse(topoSort.begin(),topoSort.end());
    vector<ll> dp(n+1,0);
    dp[q]=1;
    for(ll i=0;i<topoSort.size();i++){
        for(ll v:adj[topoSort[i]]){
            dp[topoSort[i]]+=dp[v];
            dp[topoSort[i]]%=mod;
        }
    }
    cout<<dp[p]<<endl;


}