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
        for(ll i=1;i<n;i++){
                if(i%2==0){
                    if((a[i-1]<=a[i])){
                        swap(a[i-1],a[i]);
                    }
                }
                else{
                    if((a[i-1]>=a[i])){
                        swap(a[i-1],a[i]);
                    }
                }
        }
        for(ll i=0;i<n;i++){cout<<a[i]<<" ";}
        cout<<endl;
    }
}