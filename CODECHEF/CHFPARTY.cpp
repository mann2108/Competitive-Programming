/**

Name:- Mann Mehta
Codechef-Id:- mann2108

**/

/** Problem Code:- **/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
            ll n;
            cin>>n;
            ll a[n];
            for(ll i=0;i<n;i++){
                cin>>a[i];
            }
            sort(a,a+n);

            ll cnt=0;

            for(ll i=0;i<n;i++){
                if(a[i]<=cnt){
                    cnt+=1;
                }
                else{
                    break;
                }
            }

            cout<<cnt<<endl;
    }
}