/// @author mann2108
/// Problem : SNCKYEAR

#include<bits/stdc++.h>
#include<cstdio>

using namespace std;

#define mod 10000007

typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;

int main(){
    ll test_cases;
    cin>>test_cases;
    while(test_cases--){
        ll n;
        cin>>n;
        if(n==2015 || n==2016 || n==2017 || n==2010 || n==2019){
            cout<<"HOSTED"<<endl;
        }
        else{
            cout<<"NOT HOSTED"<<endl;
        }
    }
    return 0;
}
