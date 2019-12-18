/// @author mann2108
/// Problem : QUALPREL

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool sorted(const int x,const int y){return y<x;}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n,sorted);
        ll cnt=0;
        ll sc=a[m-1];
        for(ll i=0;i<n;i++){
            if(a[i]>=sc){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}

