/**
Name:- Mann Mehta
Code-Chef Id:- mann2108
**/

/** Problem Code:- MAGICJAR **/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll t;
    cin>>t;
    while(t--){

        ll n;
        cin>>n;
        ll sum=0;
        ll x;
        for(ll i=0;i<n;i++){
            cin>>x;
            sum+=x;
        }
        cout<<sum-(n-1)<<endl;
    }
}