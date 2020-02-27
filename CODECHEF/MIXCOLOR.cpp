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
        for(ll i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        ll cnt=0;
        ll ans=0;
        for(ll i=1;i<n;i++){
            if(a[i]==a[i-1])cnt++;
            else{
                ans+=cnt;
                cnt=0;
            }
        }
        ans+=cnt;
        cout<<ans<<endl;


    }
}