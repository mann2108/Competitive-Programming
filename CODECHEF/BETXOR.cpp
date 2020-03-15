///@author mann2108
///ILLUMINATI Season 5.
///Problem : BetterXOR

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,ans=0;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)cin>>a[i];
        if(n%2==0)for(ll i=0;i<n;i++)ans^=a[i];
        cout<<ans<<endl;
    }
}
