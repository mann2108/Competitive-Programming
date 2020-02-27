#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main(){

    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    ll t;
    cin>>t;

    while(t--){

        ll n,d;

        cin>>n>>d;

        ll temp=n;

        multiset< pair<ll,ll> , greater<pair<ll,ll> > > st;
        multiset< pair<ll,ll> , greater<pair<ll,ll> > > :: iterator it;
        vector<pair<ll,ll> > vec[d+1];

        while(temp--){
            ll di,ti,si;
            cin>>di>>ti>>si;
            vec[di].push_back(make_pair(si,ti));
        }

        for(ll i=1;i<=d;i++){
            for(ll j=0;j<vec[i].size();j++){
                st.insert(vec[i][j]);
            }

            if(st.size()!=0){

                it=st.begin();
                pair<ll,ll> p1 = (*it);
                st.erase(it);
                if(p1.second!=1)
                    st.insert(make_pair(p1.first,p1.second-1));

            }
        }

        ll ans=0;

        for(it=st.begin();it!=st.end();it++){
            ans+=(it->first)*(it->second);
        }

        cout<<ans<<endl;


    }
}