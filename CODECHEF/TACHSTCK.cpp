#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n,d;
    cin>>n>>d;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    ll cnt=0;
    for(ll i=0;i<=n-2;i++){
        if(a[i+1]-a[i]<=d){
            cnt++;
            i++;
        }
    }
    cout<<cnt<<endl;
}