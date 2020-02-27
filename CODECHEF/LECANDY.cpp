#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
ll t;
cin>>t;
while(t--){
    ll n,k;
    cin>>n>>k;
    ll sum=0;
    vector < ll > vec;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        vec.push_back(x);
        sum+=x;
    }
    if(sum<=k){
        cout<<"Yes"<<endl;;
    }
    else{
        cout<<"No"<<endl;
    }
}
}