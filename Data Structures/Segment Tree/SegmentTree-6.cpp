/// @author man2108
/// SEGMENT TREE IMPLEMENTATION

/** Finding Minimum and it's occurrences in given range with point update */

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

const ll MAXN=1e5+5;
pair<ll,ll> t[4*MAXN];

pair<ll,ll> combine(pair<ll,ll> p1,pair<ll,ll> p2){
    if(p1.first>p2.first){
        return p2;
    }
    if(p2.first>p1.first){
        return p1;
    }
    return make_pair(p1.first,p1.second+p2.second);
}

void build(ll a[],ll v,ll tl,ll tr){
    if(tl==tr){
        t[v]=make_pair(a[tl],1);
    }
    else{
        ll tm=(tl+tr)/2;
        build(a,2*v,tl,tm);
        build(a,2*v+1,tm+1,tr);
        t[v]=combine(t[2*v],t[v*2+1]);
    }
}

pair<ll,ll> query_min(ll v,ll tl,ll tr,ll l,ll r){
    if(l>r){
        return make_pair(INT_MAX,0);
    }
    if(tl==l and tr==r){
       return t[v];
    }
    ll tm=(tl+tr)/2;
    return combine(query_min(2*v,tl,tm,l,min(r,tm)),query_min(2*v+1,tm+1,tr,max(l,tm+1),r));
}

void update(ll v,ll tl,ll tr,ll pos,ll value){
    if(tr==tl){
        t[v]=make_pair(value,1);
    }
    else{
        ll tm=(tl+tr)/2;
        if(pos<=tm){
            update(2*v,tl,tm,pos,value);
        }
        else{
            update(2*v+1,tm+1,tr,pos,value);
        }
        t[v]=combine(t[2*v],t[2*v+1]);
    }
}
int main(){
    ll test;
    cin>>test;
    while(test--){

        ll n,q;

        cin>>n>>q;

        ll a[n+1];

        for(ll i=1;i<=n;i++)cin>>a[i];
        build(a,1,1,n);

        while(q--){
            ll x;
            cin>>x;
            if(x==1){
                /** Min Query */
                ll a,b;
                cin>>a>>b;
                pair<ll,ll> p = query_min(1,1,n,a,b);
                cout<<p.first<<" "<<p.second<<endl;
            }
            else{
                ll a,b;
                cin>>a>>b;
                update(1,1,n,a,b);

            }
        }
    }
}
