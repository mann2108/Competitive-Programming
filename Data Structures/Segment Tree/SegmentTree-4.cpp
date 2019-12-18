/// @author man2108
/// SEGMENT TREE IMPLEMENTATION

/** Count no of 0's in given range with point update */

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

const ll MAXN=1e5+5;

pair<ll,ll> t[4*MAXN];

void build(ll a[],ll v,ll tl,ll tr){
    if(tl==tr){
        if(a[tl]==0){
            t[v]=make_pair(a[tl],1);
        }
        else{
            t[v]=make_pair(a[tl],0);
        }
    }
    else{
        ll tm = (tl+tr)/2;
        build(a,2*v,tl,tm);
        build(a,2*v+1,tm+1,tr);
        t[v]=make_pair(max(t[2*v].first,t[2*v+1].first),t[2*v].second+t[2*v+1].second);
    }
}
ll query(ll v,ll tl,ll tr,ll l,ll r){
    if(l>r){
        return 0;
    }
    else if(tl==l and tr==r){
        return t[v].second;
    }
    else{
        ll tm=(tl+tr)/2;
        return query(2*v,tl,tm,l,min(tm,r))+query(2*v+1,tm+1,tr,max(tm+1,l),r);
    }
}
void update(ll v,ll tl,ll tr,ll pos,ll value){
    if(tl==tr){
        if(value==0){
            t[v]=make_pair(value,1);
        }
        else{
            t[v]=make_pair(value,0);
        }
    }
    else{
        ll tm=(tl+tr)/2;

        if(pos<=tm){
            update(2*v,tl,tm,pos,value);
        }
        else{
            update(2*v+1,tm+1,tr,pos,value);
        }
        t[v].second=t[2*v].second+t[2*v+1].second;
        t[v].first=max(t[2*v].first,t[2*v+1].first);
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
                ll a,b;
                cin>>a>>b;
                cout<<query(1,1,n,a,b)<<endl;;
            }
            else{
                ll a,b;
                cin>>a>>b;
                update(1,1,n,a,b);
            }
        }
    }
}
