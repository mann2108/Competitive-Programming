/*

Name:- Mann Mehta
Codechef ID:- mann2108

problem code:- RAINBOWA

*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

inline bool sorted(const ll x,const ll y){return x>y;}

int main(){
    ll test;
    cin>>test;
    while(test--){
        ll n;
        cin>>n;
        ll a[n];
        ll r[7]={0};
        bool flag=true;

        for(ll i=0;i<n;i++){
            cin>>a[i];

            if(a[i]==8 || a[i]==9 || a[i]==10){
                flag=false;
            }
            else{
                r[a[i]-1]+=1;
            }
        }

        for(ll i=0;i<7;i++){
            if(r[i]==0){
                flag=false;
            }
        }

        if(flag){
            for(ll i=0,j=n-1;i<=j;i++,j--){
                if(a[i]!=a[j]){
                    flag=false;
                    break;
                }
            }

            if(flag){
                cout<<"yes"<<endl;
            }
            else{
                cout<<"no"<<endl;
            }
        }
        else{
            cout<<"no"<<endl;
        }

    }

}
