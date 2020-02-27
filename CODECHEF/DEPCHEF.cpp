/*
Name:- Mann Mehta
Id:- mann2108
*/

/* Problem Code:- DEPCHEF */

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<pair<ll,pair<ll,ll> > > soldier;
        ll attack[n];
        ll defence[n];
        for(ll i=0;i<n;i++){
            cin>>attack[i];
        }
        for(ll i=0;i<n;i++){
            cin>>defence[i];
        }
        for(ll i=0;i<n;i++){
            soldier.push_back(make_pair(-1,make_pair(attack[i],defence[i])));
        }
        for(ll i=1;i<=soldier.size()-2;i++){
            ll x=soldier[i-1].second.first;
            ll y=soldier[i+1].second.first;
            if(soldier[i].second.second>x+y){
                soldier[i].first=soldier[i].second.second;
            }
        }
        //check for soldier 1
        ll x1=soldier[n-1].second.first;
        ll y1=soldier[1].second.first;
        if(soldier[0].second.second>x1+y1){
            soldier[0].first=soldier[0].second.second;
        }
        //check for soldier n
        ll x2=soldier[n-2].second.first;
        ll y2=soldier[0].second.first;
        if(soldier[n-1].second.second>x2+y2){
            soldier[n-1].first=soldier[n-1].second.second;
        }

        sort(soldier.begin(),soldier.end());
        cout<<soldier[n-1].first<<endl;



    }
}