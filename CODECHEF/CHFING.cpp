/**
Codechef Id:- mann2108
Problem Code: -CHFING
*/

#include<bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
#define ll cpp_int
using namespace boost::multiprecision;
using namespace std;
ll mod = 1000000007;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;

        /** All the terms before k will be the unreachable */
        ll ans=(k-1);

        /** Now the sum of N terms of AP */

        /** Step-1 Find the N ? */
        /** An = A + (N-1) D ;

           An=0;
           A=(k-n);
           d=n-1;
           N=?

           N = (A+d)/d :- Integer Division !!
        */

        ll A=(k-n);
        ll D=(n-1);
        ll N=((A+D)/D)%mod;

        /** Step-2 Find Sum */
        /**(Sn = (N/2)(2A+(N-1)*(-D)); */

        if(k==1){
            cout<<"0"<<endl;
        }
        else if(k==2){
            cout<<"1"<<endl;
        }
        else if(n==2){
            ll ans;
            if((k-1)%2==0)
                ans= ((((((k-1)/2)%mod)*((k-2)%mod))%mod)+((k-1)%mod))%mod;
            else
                ans= (((((k-1)%mod)*((((k-2)/2)%mod)%mod))%mod)+((k-1)%mod))%mod;

            cout<<ans<<endl;
        }
        else if(N%2==0){
            ll Sn = (((N/2))*((((2*(A)))-(((N-1))*(D)))%mod))%mod;
            cout<<(ans+Sn)%mod<<endl;
        }
        else{
            ll Sn = (((N)*(((A)-((((N-1)/2))*(D))%mod))%mod))%mod;
            cout<<(ans+Sn)%mod<<endl;
        }
    }
}