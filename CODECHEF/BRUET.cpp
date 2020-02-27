#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll n = s.length();
        string c="";
        ll shift=n&;
        for(ll i=0;i<n;i++){
            if(s[i]+shift>122){
                ll temp=(s[i]+shift)-122+97;
                c+=temp-1;
            }
            else{
                c+=s[i]+shift;
            }
        }
        cout<<c<<endl;
    }


}