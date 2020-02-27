#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    vector<ll> prime;
    bool a[10005]={};
    a[1]=true;
    for(ll i=2;i<=10000;i++){
        if(a[i]==false){
            prime.push_back(i);
            for(ll j=i*i;j<=10000;j+=i){
                a[j]=true;
            }
        }
    }

    ll cnt[100005]={};
    for(ll i=0;i<prime.size();i++){
        for(ll j=0;j<prime.size();j++){
            cnt[prime[i]+2*prime[j]]++;
        }
    }

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<cnt[n]<<endl;
    }
}