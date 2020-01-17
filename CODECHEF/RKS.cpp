#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll row[n];
        ll col[n];
        for(ll i=0;i<n;i++){
            row[i]=0;
        }
        for(ll i=0;i<n;i++){
            col[i]=0;
        }
        for(ll i=0;i<k;i++){
            ll x,y;
            cin>>x>>y;
            row[x-1]=-1;
            col[y-1]=-1;
        }
        vector<pair<ll,ll> > vec;
        ll ind=0;
        for(ll i=0;i<n;i++){
            if(row[i]==0){
                for(ll j=ind;j<n;j++){
                    if(col[j]==0){
                        row[i]=-1;
                        col[j]=-1;
                        vec.push_back(make_pair(i+1,j+1));
                        ind=j+1;
                        break;
                    }
                }
            }
        }

        cout<<vec.size()<<" ";
        for(ll i=0;i<vec.size();i++){
            cout<<vec[i].first<<" "<<vec[i].second<<" ";
        }
        cout<<endl;
        }
}
