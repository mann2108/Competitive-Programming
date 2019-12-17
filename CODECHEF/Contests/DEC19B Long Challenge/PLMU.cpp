/// @author mann2108
/// Problem : DEC19B WATSCORE

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll bigNo  = 1e9+10;
#define pb push_back

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;
        ll two=0,zero=0;
        while(n--){
            ll x;
            cin>>x;
            if(x==2)two++;
            if(x==0)zero++;
        }
        ll ans=(two*(two-1))/2;
        ans+=(zero*(zero-1))/2;
        cout<<ans<<endl;
    }
}


