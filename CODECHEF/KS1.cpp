/** @author mann2108 */

/** Problem - Code : KS1 **/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool sorted(pair<ll,ll> p1,pair<ll,ll> p2){
    return p1.second<p2.second;
}

int main(){
    ll t;
    cin>>t;
    while(t--){

        ll n;

        cin>>n;

        vector<ll> vec;

        ll x;

        for(ll i=0;i<n;i++){
            cin>>x;
            vec.push_back(x);
        }

        vector<ll> pre;

        ll temp=0;

        map<ll,vector<ll> > mp;

        for(ll i=0;i<n;i++){
            pre.push_back((vec[i]^temp));
            temp^=vec[i];
            mp[temp].push_back(i);
        }

        ll cnt=0;

        vector<ll> d(mp[0].begin(),mp[0].end());

        for(ll i=0;i<d.size();i++){
            cnt+=d[i];
        }

        map<ll,vector<ll> > :: iterator it;

        for(it=mp.begin();it!=mp.end();it++){
            vector<ll> d(it->second.begin(),it->second.end());
            ll cntTemp=0;

            ll before=0;
            ll after=d.size()-1;

            for(ll i=0;i<d.size();i++){
                cntTemp+=(before*(d[i]))-(after*(d[i]));
                before+=1;
                after-=1;
            }
            cnt+=cntTemp;
            cnt-=((d.size()*(d.size()-1))/2);
        }
        cout<<cnt<<endl;
    }
}