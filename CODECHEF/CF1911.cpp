#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    ll t;

    cin>>t;

    while(t--){

        ll n;

        cin>>n;

        ll a[n];

        ll max=INT_MIN;
        ll min=INT_MAX;

        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<min){
                min=a[i];
            }
            if(a[i]>max){
                max=a[i];
            }
        }
        cout<<max-min<<endl;
    }
}