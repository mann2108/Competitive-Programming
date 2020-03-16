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
        ll a[n];
        for(ll i=0;i<n;i++)cin>>a[i];
        ll sum=-1;
        for(ll i=0;i<=n-3;i++){
            ll max=0;
            for(ll j=i;j<3+i;j++){
                max+=a[j];
            }
            if(max>sum)sum=max;
        }
        if(a[0]+a[n-1]+a[n-2]>=sum){sum=a[0]+a[n-1]+a[n-2];}
        if(a[0]+a[1]+a[n-1]>=sum){sum = a[0]+a[1]+a[n-1];}
        cout<<sum<<endl;
    }
}

