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
        ll dp[n]={};
        dp[n-1]=1;
        for(ll i=n-2;i>=0;i--){
            if(a[i]*a[i+1]<0){
                dp[i]=dp[i+1]+1;
            }
            else{
                dp[i]=1;
            }
        }
        for(ll i=0;i<n;i++)cout<<dp[i]<<" ";
        cout<<endl;
    }
}