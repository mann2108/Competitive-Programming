#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<ll> vec;
void initial(){
    ll n=1;
    vec.push_back(n);
    n*=2;
    while(n<=1000000000000000000){
        vec.push_back(n);
        n*=2;
    }
}

ll isPowerOf2(ll n){
for(ll i=0;i<vec.size();i++){
    if(vec[i]==n){
        return i;
    }
}
return -1;
}
/*
bool recurse(ll n,ll original){
    cout<<n<<endl;
    if(n==original){
        return true;
    }
    if(n>original){
        return false;
    }
    return ((recurse(n*10,original)) or (recurse(n*20,original)));
}
*/

int main(){
    initial();
    ll t;
    cin>>t;
    while(t--){
    /*ll n;
    cin>>n;*/
    string s;
    cin>>s;
    ll n=s.length();
    ll k=n-1;
    for(ll i=n-1;i>=0;i--){
        if(s[i]!='0'){
            k=i;
            break;
        }
    }
    ll length=n;
    n=0;
    ll fact=1;
    for(ll i=k;i>=0;i--){
        n+=fact*(s[i]-48);
        fact*=10;
    }
    //cout<<n<<endl;
    ll flag=isPowerOf2(n);
    
    //cout<<flag<<endl;
    if(flag!=-1){
        if(length-k-1>=flag){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    else{
        cout<<"No"<<endl;
    }

    /*ll original=n;
    if(recurse(1,original)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    */




    }
}