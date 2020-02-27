#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
 ll t;
 cin>>t;
 while(t--){
  ll a,b;
  cin>>a>>b;
  cout<<__gcd(a,b)<<" "<<(a*b)/__gcd(a,b)<<endl;
 }

}