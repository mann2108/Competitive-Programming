#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool isPrime(ll n){
    for(ll i=2;i<=sqrt(n)+1;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    ll y,n,x;
    cin>>y>>n>>x;

    ll sum=0;
    ll ans;
    for(ll i=1;i<=x;i++){
        sum+=(i*y);
    }
    if(sum<=n){
        ans=0;
    }
    else{
        ans=sum-n;
    }
    cout<<ans<<endl;

}