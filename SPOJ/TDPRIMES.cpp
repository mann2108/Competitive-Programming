/// @author mann2108
/// Problem : SPOJ TDPRIMES

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){

    const ll n=100000000;
    bitset<n> b;
    b[0]=b[1]=0;
    ll cnt=1;

    for(ll i=2;i<=n;i++){
        if(b[i]==0){
            if((cnt-1)%100==0)
                cout<<i<<endl;
            cnt+=1;
            for(ll j=i*i;j<=n;j+=i){
                b[j]=1;
            }
        }
    }

}
