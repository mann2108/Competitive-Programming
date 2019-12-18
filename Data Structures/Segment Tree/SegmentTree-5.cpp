/// @author man2108
/// SEGMENT TREE IMPLEMENTATION

/** Find kth zero in the array a with count of 0s in range query */

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

const ll MAXN = 1e5+5;
ll t[4*MAXN];

void build(ll a[],ll v,ll tl,ll tr){
    if(tl==tr){
        if(a[tl]==0){
            t[v]=1;
        }
        else{
            t[v]=0;
        }
    }
    else{
        ll tm=(tl+tr)/2;
        build(a,2*v,tl,tm);
        build(a,2*v+1,tm+1,tr);
        t[v]=t[2*v]+t[2*v+1];
    }
}

ll query_count_zeros(ll v,ll tl,ll tr,ll l,ll r){
    if(l>r){
        return 0;
    }
    else if(tl==l and tr==r){
        return t[v];
    }
    else{
        ll tm=(tl+tr)/2;
        return query_count_zeros(2*v,tl,tm,l,min(tm,r))+query_count_zeros(2*v+1,tm+1,tr,max(tm+1,l),r);
    }
}

ll query_kth_zero(ll v,ll tl,ll tr,ll k){
    if(k>t[v]){
        return -1;
    }
    if(tl==tr){
        return tl;
    }
    ll tm = (tl+tr)/2;
    if(t[2*v]>=k){
        return query_kth_zero(2*v,tl,tm,k);
    }
    else{
        return query_kth_zero(2*v+1,tm+1,tr,k-t[2*v]);
    }
}

ll update(ll v,ll tl,ll tr,ll pos,ll value){
    if(tl==tr){
        if(value==0)
            t[v]=1;
        else
            t[v]=0;
    }
    else{
        ll tm = (tl+tr)/2;
        if(pos<=tm)
        update(2*v,tl,tm,pos,value);
        else
        update(2*v,tm+1,tr,pos,value);
        t[v]=t[2*v]+t[2*v+1];
    }

}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,q;
        cin>>n>>q;
        ll a[n+1];
        for(ll i=1;i<=n;i++){
            cin>>a[i];
        }
        build(a,1,1,n);
        while(q--){
            ll x;
            cin>>x;
            if(x==1){
                /** count of zeros in range */
                ll a,b;
                cin>>a>>b;
                cout<<query_count_zeros(1,1,n,a,b)<<endl;;

            }
            else if(x==2){
                /** kth zero index !! */
                ll k;
                cin>>k;
                cout<<query_kth_zero(1,1,n,k)<<endl;

            }
            else{
                /** point update */
                ll a,b;
                cin>>a>>b;
                update(1,1,n,a,b);
            }
        }
    }
}
