#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
 ll n;
 cin>>n;
 vector<ll> vec;
 while(n--){
  string s;
  cin>>s;
  vec.push_back(s.length());
 }
 ll fact=1;
 for(ll i=0;i<vec.size();i++){
  for(ll j=0;j<vec[i];j++){
   cout<<fact<<" ";
  }
  fact+=1; 
 }
 
}