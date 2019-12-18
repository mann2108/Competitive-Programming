/// @author man2108
/// SEGMENT TREE IMPLEMENTATION

/** Maximum in given range query */

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MAXN = 1e5+5;
ll t[4*MAXN];

void build(ll a[],ll v,ll tl,ll tr){
    if(tr==tl){
        t[v]=a[tr];
    }
    else{
        ll tm = (tl+tr)/2;
        build(a,2*v,tl,tm);
        build(a,2*v+1,tm+1,tr);
        t[v]=max(t[2*v],t[2*v+1]);
    }
}

ll query(ll v,ll tl,ll tr,ll l,ll r){
    if(l>r) return INT_MIN;
    if(tl==l and tr==r)return t[v];
    ll tm = (tl+tr)/2;
    return max(query(2*v,tl,tm,l,min(r,tm)),query(2*v+1,tm+1,tr,max(l,tm+1),r));
}

void update(ll v,ll tl,ll tr,ll pos,ll value){
    if(tl==tr)t[v]=value;
    else{
        ll tm=(tr+tl)/2;
        if(pos<=tm){
            update(2*v,tl,tm,pos,value);
        }
        else{
            update(2*v+1,tm+1,tr,pos,value);
        }
        t[v]=max(t[2*v],t[2*v+1]);
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
                cout<<query(1,1,n,a,b)<<endl;
            }
            else{
                ll a,b;
                cin>>a>>b;
                update(1,1,n,a,b);
            }
        }

    }

}
