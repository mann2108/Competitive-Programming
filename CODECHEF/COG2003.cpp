///@author mann2108
///CODIGO 2K20

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pb push_back
#define pll pair<ll,ll>

bool sorted1(ll p1,ll p2){return p1>p2;}
bool sorted2(pll p1,pll p2){return p1.first>p2.first;}

void debug(ll num = 0){cout<<"Debug: "<<num<<endl;}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll max=-1;
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            if(x>=max)max=x;
        }
        cout<<max<<endl;
    }
}
