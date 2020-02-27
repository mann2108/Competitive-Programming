#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mod=1000000007;

ll factorial[100001];

ll power(ll a, ll b, ll mod){
 ll x = 1, y = a;
 while (b > 0){
  if (b%2){
   x = (x*y)%mod;
  }
  y = (y*y)%mod;
  b /= 2;
 }
 return x%mod;
}

ll modular_inverse(ll n, ll mod=mod){
 return power(n, mod-2, mod);
}

ll nCr(ll n, ll k, ll mod=mod){
 return (factorial[n]*((modular_inverse(factorial[k])*modular_inverse(factorial[n-k]))%mod))%mod;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    factorial[0] = 1;
 for(ll i = 1 ; i <= 100000 ; i++)
  factorial[i] = (factorial[i-1]*i)%mod;
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        ll count1 = 0,count2 = 0;

        bool flag1=true,flag2=true;

        for(ll i=0;i<n;i++){
            if(s1[i]=='1')count1++;
            if(s2[i]=='1')count2++;
            if(i!=0){
                if(s1[i]!=s1[i-1])flag1=false;
                if(s2[i]!=s2[i-1])flag2=false;
            }
        }
        ll count = count1+count2;
        count = min(count,2*n-count);

        ll ans=0;
        while(count>=max(count1,count2)-min(count1,count2)){
            ans=(ans+nCr(n,count,mod)%mod)%mod;
            count-=2;
        }
        cout<<ans<<endl;
    }
}