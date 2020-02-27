/// ENCODING 20
/// @author mann2108

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back

bool sorted(pair<ll,ll> p1,pair<ll,ll> p2){return p1.first>p2.second;}
bool sorted(ll p1,ll p2){return p1>p2;}
void debug(ll t=1){cout<<"Debug:"<<t<<endl;}


int main(){


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(a==5){
            if(b%2!=0){
                cout<<"draw"<<endl;
            }
            else{
                cout<<"sheldon"<<endl;
            }
        }
        else{
            if(b==5){
                cout<<"draw"<<endl;
            }
            else{
                cout<<"sheldon"<<endl;
            }
        }

    }
}