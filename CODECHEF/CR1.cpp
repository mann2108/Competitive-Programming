/**
CZ19 Code Runner CR1
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,s,q;
        cin>>n>>s>>q;
        bool arr[n+1]={};
        arr[s]=true;
        ll last=s;
        while(q--){
            ll s1,t1;
            cin>>s1>>t1;
            arr[t1]=true;
            last=t1;
        }
        ll cnt=0;
        for(ll i=1;i<=n;i++)if(arr[i]==true)cnt++;
        cout<<cnt<<" "<<last<<endl;
    }
}