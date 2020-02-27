#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll cnt=0;
        while(n!=0){
            cnt+=(n/5);
            n/=5;
        }
        cout<<cnt<<endl;;
    }
}