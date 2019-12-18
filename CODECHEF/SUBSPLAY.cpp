/// @author mann2108
/// Problem : DEC19B SUBSPLAY

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pb push_back

int main(){
    ll t;
    cin>>t;
    while(t--){

        ll n;
        cin>>n;
        string s;
        cin>>s;
        map<char,vector<ll> > mp;

        for(ll i=0;i<n;i++){
            mp[s[i]].push_back(i);
        }

        ll ans=LLONG_MAX;

        for(ll i=97;i<=122;i++){
            char x=i;
            if(mp[x].size()>=2){
                for(ll j=1;j<mp[x].size();j++){
                    if(mp[x][j]-mp[x][j-1]<ans){
                        ans=mp[x][j]-mp[x][j-1];
                    }
                }
            }
        }

        if(ans==LLONG_MAX){
            cout<<0<<endl;
        }
        else{
            cout<<n-ans<<endl;
        }
    }
}

