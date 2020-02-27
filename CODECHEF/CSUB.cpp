/*

Name:- Mann Mehta
Codechef ID:- mann2108

problem code:- CSUBS

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
        string s;
        cin>>s;
        ll cnt=0;
        for(ll i=0;i<s.length();i++){
            if(s[i]=='1'){
                cnt++;
            }
        }
        ll ans=cnt+(((cnt)*(cnt-1))/2);
        cout<<ans<<endl;
    }

}