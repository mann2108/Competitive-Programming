/**

Name:- Mann Mehta
Code-Chef Id:- mann2108

**/

/** Problem Code:- GUESSRT **/

#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

ll mod=1000000007;
/**

Suppose if M is Odd:-
therefore:-
Remove all the boxes added boxes every time.

Here P forms the sequence of G.P
simply:- p= (((n)^(m/2+1))%mod - ((n-1)^(m/2+1))%mod + mod) % mod
Adding mod to removing the negative number.
and Q=(n)^(m/2+1)

Q_inv using Fermat's Little Theorem

**/

ll pw(ll a,ll b, ll md){
  ll r;
  if(!b) return 1;
  r = pw(a,b/2,md);
  r = (r*r)%md;
  if(b%2) r = (r*a)%md;
  return r;
}

int main(){
        ll test_cases;
        cin>>test_cases;
        while(test_cases--){
            ll n,k,m;
            cin>>n>>k>>m;
            if(m==1){
                ll p=1;
                ll q=n;
                ll ans=(p*pw(n,mod-2,mod))%mod;
                //cout<<p<<" : "<<q_inv<<endl;
                cout<<ans<<endl;
            }
            else if(m==2){

                ll q_inv=pw(n*(n+k),mod-2,mod)%mod;
                ll p=(2*n+k-1)%mod;
                ll ans=((p%mod)*(q_inv%mod))%mod;
                //cout<<p<<" : "<<q_inv<<endl;
                cout<<ans<<endl;
            }
            else{
                if(m%2!=0){
                    ll q_inv = (ll)(pw(n,(m/2+1)*(mod-2),mod))%mod;
                    ll p=((pw(n,m/2+1,mod)%mod)-(pw(n-1,m/2+1,mod)%mod)+mod)%mod;
                    ll ans=((p%mod)*(q_inv%mod))%mod;
                    //cout<<p<<" : "<<q_inv<<endl;
                    cout<<ans<<endl;
                }
                else{
                    ll q_inv = (ll)(((pw(n+k,mod-2,mod))%mod)*((pw(n,(m/2)*(mod-2),mod)%mod)))%mod;
                    ll p=(((pw(n,m/2,mod)%mod)-(pw(n-1,m/2,mod)%mod)+mod)%mod * ((n+k)%mod) )%mod;
                    p=((p%mod) + ((pw(n-1,m/2,mod))%mod))%mod;
                    ll ans=((p%mod)*(q_inv%mod))%mod;
                    //cout<<p<<" : "<<q_inv<<endl;
                    cout<<ans<<endl;
                }
            }
        }
}