#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll findXOR(ll n){
    ll mod = n % 4;
    if (mod == 0)
        return n;
    else if (mod == 1)
        return 1;
    else if (mod == 2)
        return n + 1;
    else if (mod == 3)
        return 0;
}
ll findXOR(ll l, ll r){
    return (findXOR(l - 1) ^ findXOR(r));
}
int main(){
    ll t;
    cin>>t;
    while(t--){
    ll l,r;
    cin>>l>>r;
    if(l==0){
        if(r>=1){
            l+=1;
            cout<<findXOR(l, r)<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    else{
    cout<<findXOR(l, r)<<endl;
    }
    }
    return 0;
}