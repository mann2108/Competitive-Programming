#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for(ll i=0;i<n;i++)cin>>a[i];
        ll max_sum=0;
        for(ll i=0;i<k;i++){
            max_sum+=a[i];
        }
        ll final_ans=max_sum;
        for(ll i=0,j=k;i<n and k<n;i++,k++){
            max_sum+=a[k]-a[i];
            final_ans=max(max_sum,final_ans);
        }
        cout<<final_ans<<endl;
    }
 
} 