#include<bits/stdc++.h>
#include <string>
using namespace std;
typedef long long int ll;

/* Reference Geeks for Geeks */
ll mod=1000000007;
ll power(ll x, ll y, ll mod){
    ll ans = 1;
    x=x%mod;
    while (y > 0){
        if (y & 1){
            ans = (ans*x) % mod;
        }
        y=y>>1;
        x=(x*x)%mod;
    }
    return ans;
}

int main(){
ll t;
cin>>t;
while(t--){
    ll k;
    cin>>k;
    cout<<(power(2,k,mod)*5)%mod<<endl;


}

}