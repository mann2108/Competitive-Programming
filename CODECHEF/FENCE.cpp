#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool sorted(ll x,ll y){return x<y;}
int main(){

    ll t;
    cin>>t;
    while(t--){
        ll n,m,k;
        cin>>n>>m>>k;

        map<pair<ll,ll>,ll > mp;

        vector<pair<ll,ll> > plants;

        for(ll i=0;i<k;i++){
                ll r,c;
                cin>>r>>c;
                mp[pair<ll,ll>(r-1,c-1)]=1;
                plants.push_back(make_pair(r-1,c-1));
        }

        ll fence=0;

        for(ll i=0;i<k;i++){

            ll r=plants[i].first;
            ll c=plants[i].second;

            bool top=false,right=false,bottom=false,left=false;

            (r-1>=0)?top=true:fence++;
            (r+1<=(n-1))?bottom=true:fence++;
            (c-1>=0)?left=true:fence++;
            (c+1<=(m-1))?right=true:fence++;
            
            if(top)
                if(mp[pair<ll,ll>(r-1,c)]==0)
                    fence++;

            if(bottom)
                if(mp[pair<ll,ll>(r+1,c)]==0)
                    fence++;
                    
            if(right)
                if(mp[pair<ll,ll>(r,c+1)]==0)
                    fence++;
            
            if(left)
                if(mp[pair<ll,ll>(r,c-1)]==0)
                    fence++;

        }
        cout<<fence<<endl;
    }
}