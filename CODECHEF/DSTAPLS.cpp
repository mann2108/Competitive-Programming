#include<bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
#define ll cpp_int
using namespace std;
using namespace boost::multiprecision;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        if(k==1){
            cout<<"NO"<<endl;
        }
        else{
            ll x = k*k;
            if(n%x==0){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }


    }
}