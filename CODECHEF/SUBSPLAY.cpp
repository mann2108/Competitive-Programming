/**
@author mann2108
Problem : SUBSPLAY
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pb push_back

const ll MAX=1e5+10;

vector<bool> visited(MAX,false);
vector<ll> depth(MAX,0);
vector<ll> adj[MAX];
vector<pair<ll,ll> >eulerTour;

void dfs(ll v,ll d=0){
    visited[v]=true;
    eulerTour.pb({v,d});
    for(ll u:adj[v]){
        if(!visited[u]){
            dfs(u,d+1);
            eulerTour.pb({v,d});
        }
    }
}

vector<pair<ll,ll> > segTree;

void build(ll v,ll tl,ll tr){
    if(tl==tr){
        segTree[v]=eulerTour[tl];
    }
    else{
        ll tm = (tl+tr)/2;
        build(2*v,tl,tm);
        build(2*v+1,tm+1,tr);
        if(segTree[2*v].second<segTree[2*v+1].second){
            segTree[v]=segTree[2*v];
        }
        else{
            segTree[v]=segTree[2*v+1];
        }
    }
}

pair<ll,ll> query(ll v,ll tl,ll tr,ll l,ll r){
    if(l>r){
        return {INT_MAX,INT_MAX};
    }
    if(l==tl and r==tr){
        return segTree[v];
    }
    ll tm=(tl+tr)/2;
    pair<ll,ll> x1 = query(2*v,tl,tm,l,min(r,tm));
    pair<ll,ll> x2 = query(2*v+1,tm+1,tr,max(l,tm+1),r);
    if(x1.second<x2.second){
        return x1;
    }
    else{
        return x2;
    }
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        
        ll n;
        cin>>n;
        string s;
        cin>>s;
        map<char,vector<ll> > mp;
        
        
        for(ll i=0;i<n;i++){
            mp[s[i]].push_back(i);
        }
        ll ans=LLONG_MAX;
        for(ll i=97;i<=122;i++){
            char x=i;
            if(mp[x].size()>=2){
                for(ll j=1;j<mp[x].size();j++){
                    if(mp[x][j]-mp[x][j-1]<ans){
                        ans=mp[x][j]-mp[x][j-1];
                    }   
                }
            }
        }
        
        if(ans==LLONG_MAX){
            cout<<0<<endl;
        }
        else{
            cout<<n-ans<<endl;
        }
    }
}