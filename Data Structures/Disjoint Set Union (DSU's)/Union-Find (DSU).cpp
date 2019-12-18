/// @author mann2108
/// DSU - Disjoin Set Union & Find (Complexity - Ackerman Function and Amortize Time < O(1) )

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<ll> parent;

ll find_set(ll u){
    if(parent[u]==u){
        return u;
    }
    else{

        return parent[u]=find_set(parent[u]);
    }
}

void union_set(ll u,ll v){
    if(rand()%2==0){
        swap(u,v);
    }
    parent[u]=v;
}

int main(){
    ll n,m;
    cin>>n>>m;
    parent.push_back(-1);
    for(ll i=1;i<=n;i++){parent.push_back(i);}
    while(m--){

        ll x;
        cin>>x;
        if(x==1){
            ll u,v;
            cin>>u>>v;
            u=find_set(u);
            v=find_set(v);
            if(u==v){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            ll u,v;
            cin>>u>>v;
            u=find_set(u);
            v=find_set(v);
            if(u!=v){
                union_set(u,v);
            }
        }
    }
}
