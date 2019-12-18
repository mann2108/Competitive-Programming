/// @author mann2108
/// Problem : SPREAD2

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        ll known=1;
        ll day=0;
        ll cnt=0;

        for(int i=1;i<n;i++){
            a[i]=a[i]+a[i-1];
        }
        ll i=0;

        while(known<n){
            known+=a[i];
            i=known-1;
            day++;

        }
        cout<<day<<endl;
    }
}

