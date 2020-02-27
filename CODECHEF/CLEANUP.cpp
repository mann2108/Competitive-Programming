#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool sorted(pair<ll,ll> p1,pair<ll,ll> p2){return (p1.first<p2.first);}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<pair<ll,ll> > vec;
        for(ll i=0;i<n;i++){
            vec.push_back(make_pair(0,i+1));
        }
        for(ll i=0;i<m;i++){
            ll x;
            cin>>x;
            vec[x-1].first=-1;
        }
        bool flag=true;
        vector<ll> chef,assistant;
        for(ll i=0;i<n;i++){
           if(vec[i].first!=-1){
                if(flag){
                    chef.push_back(vec[i].second);
                    flag=false;
                }
                else{
                    assistant.push_back(vec[i].second);
                    flag=true;
                }
           }
        }
        for(ll i=0;i<chef.size();i++){
            cout<<chef[i]<<" ";
        }
        cout<<endl;
        for(ll i=0;i<assistant.size();i++){
            cout<<assistant[i]<<" ";
        }
        cout<<endl;

    }
}