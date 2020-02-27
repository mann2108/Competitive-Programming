#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin>>n;
    ll player = 1;
    ll lead = -1;
    ll p1=0;
    ll p2=0;
    for(ll i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        p1+=x;p2+=y;
        if(p1>p2){
            if(lead<p1-p2){
                player=1;
                lead=p1-p2;
            }
        }
        else{
            if(lead<p2-p1){
                player=2;
                lead=p2-p1;
            }
        }
    }
    cout<<player<<" "<<lead<<endl;
    
    
}