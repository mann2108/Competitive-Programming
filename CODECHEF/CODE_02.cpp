/// @author mann2108
/// CodeMania

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pb push_back

bool sorted1(ll p1,ll p2){return p1>p2;}
bool sorted2(pair<ll,ll> p1,pair<ll,ll> p2){return p1.first>p2.first;}
bool sorted3(pair<pair<ll,ll>,pair<ll,ll> > p1,pair<pair<ll,ll>,pair<ll,ll> > p2){return p1.first.first>p2.first.second;}

void debug(ll temp=0){cout<<"Debug : "<<temp<<endl;}

int main(){
    ll t;

    //while(t--){
        vector<string> vec;
        for(ll i=0;i<6;i++){
            string s;
            cin>>s;
            vec.pb(s);
        }
        for(ll i=5;i>=0;i--){
            reverse(vec[i].begin(),vec[i].end());
            cout<<vec[i]<<endl;
        }
    //}
}