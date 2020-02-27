#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll n=s.length();
        ll cnt1=0;
        for(ll i=0;i<n;i++){
            if(s[i]=='1'){
                cnt1++;
            }
        }

        if(cnt1%2!=0){
            cout<<"WIN"<<endl;
        }
        else{
            cout<<"LOSE"<<endl;
        }
    }
}