#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
ll t;
cin>>t;
while(t--){
    ll x,y,n,k;
    bool flag=false;
    cin>>x>>y>>k>>n;
    ll t1[n],t2[n];
    for(ll i=0;i<n;i++){
        cin>>t1[i]>>t2[i];
    }
    for(ll i=0;i<n;i++){
        if(t1[i]>=x-y && t2[i]<=k){
            flag=true;
            break;
        }
    }
    if(flag){
            cout<<"LuckyChef"<<endl;

    }
    else{
            cout<<"UnluckyChef"<<endl;

    }
}

}