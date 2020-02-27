/**
ILLUMINATI SEASON 3 ROUND 2
DICRAN
CODECHEF STUDENT CHAPTER CHARUSAT
*/
 
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std; 
ll factorials[26];
ll fact(int n){
 ll fac=1;
 for(ll i=1;i<=n;i++){
  fac=(fac*(i))00000007;
 }
 return fac;
}
int main(){
 for(ll i=1;i<=26;i++)
  factorials[i-1]=fact(i);
    ll t,n;
    string s;
    cin>>t;
    for(ll i=0;i<t;i++){
     cin>>n;
        cin>>s;
        ll pos=1;
        ll str_len=s.length();
        ll cnt[26]={0};
        for(ll j=0;j<str_len;j++)
         ++cnt[s[j]-97];
     for(ll j=0;j<str_len;j++){
      ll tmp=0;
      for(ll k=0;k<s[j]-97;k++){
       if(cnt[k]>0)
        tmp++;
   }
   pos=(pos+((factorials[str_len-j-2]*(tmp00000007))00000007))00000007;
   cnt[s[j]-97]=0; 
  }
  cout<<pos<<endl;
    }
} 