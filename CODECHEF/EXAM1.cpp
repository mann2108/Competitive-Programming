#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    while(t--){

        ll n;
        string s1,s2;
        cin>>n>>s1>>s2;

        ll cnt=0;

        for(ll i=0;i<=n-1;i++){
            if(s2[i]=='N'){
                continue;
            }
            if(s1[i]!=s2[i]){
                i++;
                continue;
            }
            cnt++;
        }


        cout<<cnt<<endl;

    }
}