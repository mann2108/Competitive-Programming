#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        unordered_map<ll,ll> mp;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]=1;
        }

        sort(a,a+n);

        ll cnt=0;

        for(ll i=0;i<n;i++){
            if(mp[a[i]+1]==1)continue;
            if(mp[a[i]-1]==1)continue;
            mp[a[i]+1]=1;
            cnt+=1;
        }
        cout<<cnt<<endl;
    }
}