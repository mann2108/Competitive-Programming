/// @author mann2108
/// Problem : CHFAR

#include<bits/stdc++.h>
#include<cstdio>

using namespace std;

#define mod 10000007

typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;

inline bool sorted(const ll x,const ll y){return y<x;}

int main(){
    ll test_cases;
    cin>>test_cases;
    while(test_cases--){
        ll n,k;
        cin>>n>>k;
        ll a[n];
        ll cnt=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(a[i]!=1){
                cnt++;
            }
        }
        bool flag=false;

        if(cnt<=k){
            flag=true;
        }
        else{
            flag=false;
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

