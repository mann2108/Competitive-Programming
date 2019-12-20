/// @author mann2108
/// Problem : ZCO13003

#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

bool sorted(const ll x, const ll y){return x>y;}
int main(){

    ll k,n,cnt=0;
    cin>>n>>k;
    ll a[n];
    ll x;
    ll ind=0;
    for(ll i=0;i<n;++i){
        cin>>x;
        if(x<k){
            a[ind]=x;
            ind++;
        }
    }

    sort(a,a+(ind),sorted);

    vector < pair< ll,ll > > vec ;
    cnt=1;
    for(ll i=1;i<ind;i++){
       if(a[i]==a[i-1]){
        cnt++;
       }
       else{
        vec.push_back(make_pair(a[i-1],cnt));
        cnt=1;
       }
    }
    if(cnt>0){
        vec.push_back(make_pair(a[ind-1],cnt));
    }

    ll ans=0;
    ll rewind=0;

    for(ll i=0;i<vec.size();i++){
        if(vec[i].second==1 && i!=vec.size()-1){
            if(vec[i].first+vec[i+1].first<k){
                break;
            }
        }
        else{
            if(vec[i].first+vec[i].first<k){
                break;
            }
        }

    rewind+=vec[i].second;
    for(ll j=vec.size()-1;j>=i;j--){
        if(vec[i].first+vec[j].first<k){
            if(i==j){
                ans+=(vec[i].second)*(vec[i].second-1)/2;
            }
            else{
                ans+=vec[j].second*vec[i].second;
            }
        }
        else{
            break;
        }
      }
    }
    ans+=(ind-rewind)*(ind-rewind-1)/2;
    cout<<ans<<endl;
    return 0;
}
