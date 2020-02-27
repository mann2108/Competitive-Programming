#include<bits/stdc++.h>
using namespace std;
typedef long int ll;

bool sorted(pair<ll,pair<ll,ll> > p1,pair<ll,pair<ll,ll> > p2){
    return p1.second.first<p2.second.first;
}

vector<ll> parent;

ll find_set(ll u){
    if(u==parent[u])return u;
    return parent[u]=find_set(parent[u]);
}

ll union_set(ll u,ll v){
    if(rand()%2==0){
        swap(u,v);
    }
    parent[u]=v;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
            parent.clear();
        ll n,m;
        cin>>n>>m;

        vector<pair<ll,pair<ll,ll> > > edge;
        ll u,v,w;

        while(m--){
            cin>>u>>v>>w;
            edge.push_back({w,{u,v}});
        }

        sort(edge.begin(),edge.end());

        for(ll i=0;i<=n;i++)parent.push_back(i);

        vector<pair<ll,pair<ll,ll> > >sol;


        ll sum=0;
        ll x=0;
        for(ll i=0;i<edge.size();i++){

            ll w=edge[i].first;
            ll u=edge[i].second.first;
            ll v=edge[i].second.second;

            u=find_set(u);
            v=find_set(v);

            if(u!=v){
                sum+=w;
                sol.push_back({w,{edge[i].second.first,edge[i].second.second}});
                union_set(u,v);
                x+=1;
                if(x==n-1){
                    break;
                }
            }
        }

        //sort(sol.begin(),sol.end(),sorted);
        sort(sol.begin(),sol.end());
        //cout<<sum;
        for(ll i=0;i<sol.size();i++)cout<<min(sol[i].second.first,sol[i].second.second)<<" "<<max(sol[i].second.first,sol[i].second.second)<<" "<<sol[i].first<<endl;

    }

}