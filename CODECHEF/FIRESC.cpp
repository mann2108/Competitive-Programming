/** DSU Implementation Optimize */

#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

ll Max = 1e4+5;
ll mod = 1000000007;

vector<ll> parent(Max);

ll  find_set(ll x){
    if(parent[x]==x)return x;
    return parent[x]=find_set(parent[x]);
}

void union_set(ll x,ll y){
    x=find_set(x);
    y=find_set(y);
    if(rand()%2)
        parent[x]=y;
    else
        parent[y]=x;
}

int main(){

    ios_base::sync_with_stdio(false);

    ll t;
    cin>>t;

    while(t--){

        parent.clear();

        ll n,m;
        cin>>n>>m;

        for(ll i=1;i<=n;i++){
            parent[i]=i;
        }

        while(m--){
            ll x,y;
            cin>>x>>y;
            union_set(x,y);
        }

        map<ll,ll> mp;

        for(ll i=1;i<=n;i++){
            mp[parent[i]]+=1;
        }

        ll ans=1;
        map<ll,ll> :: iterator it;
        for(it = mp.begin();it!=mp.end();it++){
            ll x=(*it).second;
            ans=(ans*x)%mod;
        }

        cout<<mp.size()<<" "<<ans%mod<<endl;





    }
}