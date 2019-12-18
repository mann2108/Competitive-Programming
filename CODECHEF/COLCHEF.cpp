/// @author mann2108
/// Problem : COLCHEF

/** DSU Implementation */

#include<bits/stdc++.h>
#include<stdlib.h>

using namespace std;
typedef long long int ll;

ll Max=1e5+5;

vector<ll> parent(Max);

ll find_set(ll v){
    if(v==parent[v]){
        return v;
    }
    return parent[v]=find_set(parent[v]);
}

void union_set(ll a,ll b){
    a=find_set(a);
    b=find_set(b);
    if(a!=b){
        if(rand()%2){
            swap(a,b);
        }
        parent[b]=a;
    }
}


int main(){

    ll n;
    cin>>n;

    for(ll i=1;i<=n;i++){
        parent[i]=i;
    }

    ll q;
    cin>>q;

    while(q--){

        ll x,a,b;
        cin>>x>>a>>b;

        if(x==0){
            union_set(a,b);
        }

        else{
            if(find_set(a)==find_set(b)){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}
