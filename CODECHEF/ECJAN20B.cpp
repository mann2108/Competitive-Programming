/// ENCODING 20
/// @author mann2108

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back

bool sorted(pair<ll,ll> p1,pair<ll,ll> p2){return p1.first>p2.second;}
bool sorted(ll p1,ll p2){return p1>p2;}
void debug(ll t=1){cout<<"Debug:"<<t<<endl;}


int main(){


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    ll t;
    cin>>t;
    while(t--){
        ll n,m,k;
        cin>>n>>m>>k;
            ll x=k/(n+m);
            ll y=k%(n+m);
            ll z=x*n;
            ll ans1=y+z;
            ll ans2=LLONG_MAX;
            if(k%(n+m)!=0){
                ll temp=k/(n+m);
                ans2=n*(temp+1);
            }
            else{
                ans2=n*(k/(n+m));
            }
            cout<<min(ans1,ans2)<<endl;
            //cout<<<<endl;

    }
}