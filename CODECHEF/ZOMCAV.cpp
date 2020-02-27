/**
@author : mann2108
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

        vector<ll> a;
        vector<ll> b;
        vector<ll> c;
        ll x;

        for(ll i=0;i<n;i++){
            cin>>x;
            a.push_back(x);
        }

        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            c.push_back(x);
        }



        for(ll i=0;i<n;i++){
            b.push_back(0);
        }



        for(ll i=0;i<n;i++){

            ll l = (i+1)-a[i]-1;
            ll r = (i+1)+a[i]-1;

            if(l<0){
                l=0;
            }
            if(r>=(n-1)){
                r=n-1;
            }

            b[l]+=1;
            b[r+1]-=1;

        }

        for(ll i=1;i<n;i++){
            b[i]=b[i-1]+b[i];
        }

        sort(b.begin(),b.end());
        sort(c.begin(),c.end());
        bool flag=true;
        for(ll i=0;i<n;i++){
            if(b[i]!=c[i]){
                    flag=false;
                    break;
            }
        }

        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}