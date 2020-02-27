#include<bits/stdc++.h>
#include<fstream>
using namespace std;
typedef long long int ll;

ll parent[100010];
ll cost[100010];

void union_set(ll u,ll v){
    if(rand()%2==0){
        swap(u,v);
    }
    parent[v]=parent[u];
}

ll find_set(ll u){
    if(parent[u]==u)return u;
    return parent[u]=find_set(parent[u]);
}

int main(){

    ll n,m;
    cin>>n>>m;

    for(ll i=0;i<=n;i++)parent[i]=i;

    ll u,v;

    while(m--){
        cin>>u>>v;
        u=find_set(u);
        v=find_set(v);
        if(u!=v){
            union_set(u,v);
        }
    }

    cost[0]=LLONG_MAX;
    for(ll i=1;i<=n;i++){
        ll x;
        cin>>x;
        if(x<0)x=LLONG_MAX;
        cost[i]=x;

    }


    set<ll> st;
    for(ll i=1;i<=n;i++)st.insert(find_set(i));

    if(st.size()==1){
        cout<<"0"<<endl;
    }
    else{

        map<ll,ll> mp;
        for(ll i=1;i<=n;i++)mp[find_set(i)]=LLONG_MAX;

        for(ll i=1;i<=n;i++)mp[find_set(i)]=min(mp[find_set(i)],cost[i]);

        vector<ll> vec;
        map<ll,ll> :: iterator it;
        bool flag=false;
        for(it=mp.begin();it!=mp.end();it++){
            if(it->second==LLONG_MAX){
                flag=true;
                break;
            }
            vec.push_back(it->second);
        }

        if(flag){
            cout<<"-1"<<endl;
        }
        else{
            /*for(ll i=0;i<vec.size();i++)cout<<vec[i]<<" ";
            cout<<endl;*/
            sort(vec.begin(),vec.end());
            ll x=vec[0];
            ll sum=0;
            for(ll i=1;i<vec.size();i++){
                sum+=x;
                sum+=vec[i];
            }
            cout<<sum<<endl;
        }

    }
}