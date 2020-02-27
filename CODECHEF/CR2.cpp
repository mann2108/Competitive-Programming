/*
CZ19 Code Runner CR2
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll l[n],p[n];
        for(ll i=0;i<n;i++)cin>>l[i];
        for(ll i=0;i<n;i++)cin>>p[i];
        ll total_level = INT_MIN;
        for(ll i=0;i<n;i++)total_level = max(total_level,l[i]+p[i]);
        cout<<total_level<<endl;
    }
}