/// @author mann2108
/// Problem : DISHOWN

/** DSU Implementation Optimize */

#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

ll Max = 1e5+5;

vector<ll> s(Max);
vector<ll> parent(Max);

ll  find_set(ll x){
    if(parent[x]==x)return x;
    return parent[x]=find_set(parent[x]);
}

void union_set(ll x,ll y){
    if(rand()%2==0){
        swap(x,y);
    }
    parent[x]=y;
}

int main(){
    ios_base::sync_with_stdio(false);
    s.clear();
    parent.clear();

    ll n;
    cin>>n;

    for(ll i=1;i<=n;i++){
        parent[i]=i;
    }
    ll q;
    cin>>q;
    while(q--){

        ll x;

        cin>>x;
        if(x==1){

            ll a,b;

            cin>>a>>b;
            ll p1,p2;

            p1=find_set(a);
            p2=find_set(b);
            union_set(p1,p2);

        }
        else{

            ll u,v;
            cin>>u>>v;

            if(find_set(u)==find_set(v)){
                cout<<"Yes"<<endl;
            }

            else{
                cout<<"No"<<endl;
            }

        }
    }

}
