/// @author mann2108
/// CodeMania

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pb push_back

bool sorted1(ll p1,ll p2){return p1>p2;}
bool sorted2(pair<ll,ll> p1,pair<ll,ll> p2){return p1.first>p2.first;}
bool sorted3(pair<pair<ll,ll>,pair<ll,ll> > p1,pair<pair<ll,ll>,pair<ll,ll> > p2){return p1.first.first>p2.first.second;}

void debug(ll temp=0){cout<<"Debug : "<<temp<<endl;}

int main(){
    ll t;
    cin>>t;
    vector<ll> solution;
    while(t--){
        ll x,y;
        cin>>x>>y;
        ll ans=x*y;
        ll temp=__gcd(x,y);
        cout<<ans/(temp*temp)<<endl;
    }
}