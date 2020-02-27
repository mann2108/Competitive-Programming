#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n;
        vector<pair<ll,ll> >playList;
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            playList.push_back(make_pair(x,i+1));
        }
        cin>>k;
        sort(playList.begin(),playList.end());
        ll cnt=0;
        for(ll i=0;i<n;i++){
            if(playList[i].second!=k){
                cnt++;
            }
            else{
                cnt++;
                break;
            }
        }
        cout<<cnt<<endl;
    }
}