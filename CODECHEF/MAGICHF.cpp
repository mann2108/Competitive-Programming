#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,x,s;
        cin>>n>>x>>s;
        ll temp=x;
        while(s--){
            ll a,b;
            cin>>a>>b;
            if(a==temp){
                temp=b;
                //cout<<temp<<endl;
            }
            else if(b==temp){
                temp=a;
                //cout<<temp<<endl;
            }
        }
        cout<<temp<<endl;
    }

}