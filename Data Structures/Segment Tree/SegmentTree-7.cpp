/// @author man2108
/// SEGMENT TREE IMPLEMENTATION

/** Finding subsegments with the maximal sum*/

/** GSS1 - SPOJ */

#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

struct data{
    ll sum,ans,pref,suff;
};

const ll MAXN = 1e5+5;

data t[4*MAXN];

data make_data(ll value){
    data res;
    res.sum=value;
    res.ans=max((ll)INT_MIN,value);
    res.pref=max((ll)INT_MIN,value);
    res.suff=max((ll)INT_MIN,value);
    return res;
}


data combine(data l,data r){
    data res;
    res.sum=l.sum+r.sum;
    res.pref=max(l.pref,r.pref+l.sum);
    res.suff=max(r.suff,l.suff+r.sum);
    res.ans=max(max(l.ans,r.ans),l.suff+r.pref);
    return res;
}

void build(ll a[],ll v,ll tl,ll tr){
    if(tl==tr){
        t[v]=make_data(a[tl]);

    }
    else{
        ll tm = (tl+tr)/2;
        build(a,2*v,tl,tm);
        build(a,2*v+1,tm+1,tr);
        t[v]=combine(t[2*v],t[2*v+1]);
    }
}

void update(ll v,ll tl,ll tr,ll pos,ll value){

    if(tl==tr){
        t[v]=make_data(value);
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

data query(ll v,ll tl,ll tr,ll l,ll r){
    if(l>r){
        return make_data((ll)INT_MIN);
    }
    if(l==tl and r==tr){
        return t[v];
    }
    ll tm = (tl+tr)/2;
    return combine(query(2*v,tl,tm,l,min(r,tm)),query(2*v+1,tm+1,tr,max(l,tm+1),r));
}

int main(){
        ll n,q;
        cin>>n;
        ll a[n+1];
        for(ll i=1;i<=n;i++)cin>>a[i];
        cin>>q;
        build(a,1,1,n);
        while(q--){
                ll l,r;
                cin>>l>>r;
                data ans1 = query(1,1,n,l,r);
                cout<<ans1.ans<<endl;
        }
}
