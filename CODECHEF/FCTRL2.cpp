/*
we can compute comparatively 1000!
*/
#include<bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
#define ll cpp_int
using namespace boost::multiprecision;
using namespace std;

ll fact(ll n){
    if(n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

int main(){

    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;
        cout<<fact(n)<<endl;
    }
}
