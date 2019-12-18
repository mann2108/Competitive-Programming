/// @author man2108
/// SEGMENT TREE IMPLEMENTATION

/** sum of all elements in given range query */

#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

const ll MAXN=1e5+5;

ll n,t[(ll)4*MAXN];

void build(ll a[],ll v,ll tl,ll tr){
    if(tl==tr)t[v]=a[tl];
    else{
        ll tm = (tl+tr)/2;
        build(a,2*v,tl,tm);
        build(a,2*v+1,tm+1,tr);
        t[v]=t[2*v]+t[2*v+1];
    }
}

ll sum(ll v,ll tl,ll tr,ll l ,ll r){
    if(l>r) return 0;
    if(l==tl and r==tr)return t[v];
    ll tm = (tl+tr)/2;
    return sum(2*v,tl,tm,l,min(r,tm))+sum(2*v+1,tm+1,tr,max(l,tm+1),r);
}

ll update(ll v,ll tl,ll tr,ll pos,ll val){
    if(tl==tr){
        t[v]=val;
    }
    else{
        ll tm=(tl+tr)/2;
        if(pos<=tm){
            update(2*v,tl,tm,pos,val);
        }
        else{
            update(2*v+1,tm+1,tl,pos,val);
        }
        t[v]=t[2*v]+t[2*v+1];
    }

}

int main(){

    ll test;
    cin>>test;

    while(test--){

        ll n,q;

        cin>>n>>q;

        ll a[n+1];

        for(ll i=1;i<=n;i++){cin>>a[i];}

        build(a,1,1,n);

        while(q--){
            ll x;
            cin>>x;
            if(x==1){
                ll l,r;
                cin>>l>>r;
                cout<<sum(1,1,n,l,r)<<endl;;
            }
            else{
                ll x,val;
                cin>>x>>val;
                update(1,1,n,x,val);
            }
        }


    }

}

