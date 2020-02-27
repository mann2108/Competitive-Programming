#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,q;
    cin>>n>>m>>q;
    ll a[n];
    ll b[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<m;i++)cin>>b[i];
    while(q--){
        ll c[4001];
        for(ll i=0;i<4001;i++)c[i]=0;
        ll l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        for(ll i=l1-1;i<=r1-1;i++)c[a[i]]+=1;
        for(ll i=l2-1;i<=r2-1;i++)c[b[i]]+=1;
        ll count1=0;
        for(ll i=0;i<=4000;i++){
            if((c[i]%2)!=0)count1++;
        }
        cout<<count1<<endl;
    }
}