#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main(){

    ios_base::sync_with_stdio(false);

    ll t;

    cin>>t;

    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        ll min=INT_MAX;
        for (ll i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<min)min=a[i];
        }
        ll sum=0;
        for(ll i=0;i<n;i++){
            sum+=(a[i]-min);
        }
        cout<<sum<<endl;


    }
}