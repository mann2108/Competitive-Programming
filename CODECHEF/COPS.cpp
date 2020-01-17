/*

Name:- Mann Mehta
Codechef ID:- mann2108

problem code:- COPS

*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

inline bool sorted(const ll x,const ll y){return x>y;}

int main(){
    ll test;
    cin>>test;
    while(test--){
        ll m,x,y;
        cin>>m>>x>>y;
        ll a[m];
        ll ans[100]={0};
        for(ll i=0;i<m;i++){
            cin>>a[i];
            ll begin=a[i]-(x*y);
            ll end=a[i]+(x*y);
            if(begin<=0){
                begin=1;
            }
            if(end>=100){
                end=100;
            }
            for(ll i=begin-1;i<=end-1;i++){
                ans[i]=1;
            }
            /*if(begin<=0){
                begin=1;
            }
            ll end=a[i]+(x*y);
            if(end>=100){
                end=99;
            }
            ans[begin-1]+=1;
            ans[end]=-1;
            */
        }
        ll cnt=0;
        for(ll i=0;i<100;i++){
        //    ans[i]=ans[i]+ans[i-1];
            if(ans[i]==0){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }

}


