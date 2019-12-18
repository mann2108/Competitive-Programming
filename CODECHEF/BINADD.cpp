/// @author mann2108
/// Problem : DEC19B BINNADD

#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

bool isZero(string s){
    for(ll i=0;i<s.length();i++){
        if(s[i]!='0'){
            return false;
        }
    }
    return true;
}

ll add(string s1,string s2){
    ll n1=s1.length();
    ll n2=s2.length();
    string temp="";
    if(n1<n2){
        for(ll i=0;i<n2-n1;i++)temp+='0';
        s1=temp+s1;

    }
    else if(n2<n1){
        for(ll i=0;i<n1-n2;i++)temp+='0';
        s2=temp+s2;
    }

    ll alt=0;
    ll ans=-1;

    for(ll i=0;i<max(n1,n2);i++){

        if(s1[i]!=s2[i]){
            alt+=1;
        }
        else{
            if(s1[i]=='1'){
                ans=max(ans,alt);
            }
            alt=0;
        }
    }
    if(ans==-1){
        ans=1;
    }
    else{
        ans=ans+2;
    }

    return ans;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;

    cin>>t;

    while(t--){

        string s1,s2;
        cin>>s1>>s2;
        if(isZero(s2)){
            cout<<0<<endl;
        }
        else{
            cout<<add(s1,s2)<<endl;
        }
    }
}

