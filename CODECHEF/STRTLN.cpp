#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool sorted(pair<ll,ll> p1,pair<ll,ll> p2){return p1.second<p2.second;}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        map<pair<ll,ll>,ll> mp;
        vector<pair<ll,ll> > vec;
        ll tx=0,ty=0;

        for(ll i=0;i<n;i++){
            ll x,y;
            cin>>x>>y;
            vec.push_back({x,y});
            mp[{x,y}]=1;
        }
        sort(vec.begin(),vec.end());
        ll not11 = 0;
        for(ll i=1;i<n;i++){
            if(vec[i].first==vec[i-1].first){
                tx++;
            }
            else{
                //cout<<":"<<tx<<endl;
                tx++;
                not11+=(tx*(tx-1))/2;
                tx=0;
            }

        }
        if(tx!=0){
            tx++;
            not11+=(tx*(tx-1))/2;
        }
        sort(vec.begin(),vec.end(),sorted);
        for(ll i=1;i<n;i++){
            if(vec[i].second==vec[i-1].second){
                ty++;
            }
            else{
                    //cout<<":"<<ty<<endl;
                ty++;
                not11+=(ty*(ty-1))/2;
                ty=0;
            }
        }
        if(ty!=0){
            ty++;
            not11+=(ty*(ty-1))/2;
        }

        ll ans = (n*(n-1))/2;
        ans = ans-not11;
        cout<<ans<<endl;


    }
}