#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll g;
        cin>>g;
        while(g--){
            ll i,n,q;
            cin>>i>>n>>q;
            if(n%2==0){
                cout<<n/2<<endl;
            }
            else{
                if(i==q){
                    cout<<n/2<<endl;
                }
                else{
                    cout<<n/2+1<<endl;
                }
            }
        }
    }
}