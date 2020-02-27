#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll s[n];
        for(ll i=0;i<n;i++){cin>>s[i];}
        sort(s,s+n);
        ll minDiff=INT_MAX;
        for(ll i=1;i<n;i++){
            if(s[i]-s[i-1]<minDiff){
                minDiff=s[i]-s[i-1];
            }
        }
      
        cout<<minDiff<<endl;
        
    }

}