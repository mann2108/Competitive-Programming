#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        map<ll,vector<ll> > mp;

        while(n--){
            ll d,v;
            cin>>d>>v;
            mp[d].push_back(v);
        }

        map<ll,vector<ll> > :: iterator it;

        for(it=mp.begin();it!=mp.end();it++){
            sort((*it).second.begin(),(*it).second.end());
        }
        vector<ll> vec;
        for(it=mp.begin();it!=mp.end();it++){
            vec.push_back((*it).second[(*it).second.size()-1]);
        }

        sort(vec.begin(),vec.end());

        ll sum = vec[vec.size()-1]+vec[vec.size()-2];

        cout<<sum<<endl;


    }
}