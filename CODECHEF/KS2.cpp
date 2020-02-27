/*
CodeChef Id: - mann2108
Problem Code: -KS2
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll findSum(ll n){
    ll sum=0;
    while(n!=0){
        sum+=(n);
        n/=10;
    }
    return sum;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll sum=findSum(n);
        ll x=sum;
        if(x==0){
            cout<<n<<"0"<<endl;
        }
        else{
            cout<<n<<(10-x)<<endl;
        }
    }
}