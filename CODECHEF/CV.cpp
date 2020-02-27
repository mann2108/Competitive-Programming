#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        char vowels[] ={'a','e','i','o','u'};
        ll cnt=0;
        for(ll i=1;i<n;i++){
            bool flag1=false,flag2=false;
            for(ll j=0;j<5;j++){
                if(s[i]==vowels[j])
                    flag1=true;
            }
            for(ll j=0;j<5;j++){
                if(s[i-1]==vowels[j])
                    flag2=true;
            }

            if(flag1 and !flag2){
                cnt++;
            }

        }
        cout<<cnt<<endl;
    }
}