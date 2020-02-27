/// @author mann2108
/// Problem : WATSCORE

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll bigNo  = 1e9+10;

#define pb push_back

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;

    cin>>t;

    while(t--){
        ll n;
        cin>>n;
        unordered_map<ll,ll> mp;
        while(n--){
            ll pi,si;
            cin>>pi>>si;
            mp[pi]=max(mp[pi],si);
        }
        ll sum=0;
        for(ll i=1;i<=8;i++)sum+=mp[i];
        cout<<sum<<endl;
    }

}