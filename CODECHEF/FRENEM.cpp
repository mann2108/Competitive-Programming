/**
ILLUMINATI SEASON 3 ROUND 2
FRENEM
CODECHEF STUDENT CHAPTER CHARUSAT
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mod = 1000000007;
int  main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        ll sum=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        ll cnt=0;
        for(ll i=0;i<n;i++){
             cnt=(((cnt%mod)+((((a[i]*(a[i]-1))/2)%mod)*((sum-a[i])%mod))%mod));
        }
        cout<<cnt%mod<<endl;
    }
}