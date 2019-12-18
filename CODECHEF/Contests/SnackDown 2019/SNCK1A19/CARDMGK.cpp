/// @author mann2108
/// Problem : CARDMGK

#include<bits/stdc++.h>
#include<algorithm>
#define ll long long int
#define ull unsinged long long INT_MAX

using namespace std;

bool sortbysec(const pair<ll,ll> &a,const pair<ll,ll> &b){
    return ((a.second*a.first) > (b.second*b.first));

}

int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;
        ll a[n]={0};
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll in=0;
        for(ll i=1;i<n;i++){
            if(a[i]<a[i-1]){
                in=i;
                break;
            }
        }
        ll b[n]={0};
        ll ind=0;
        for(ll i=in;i<n;i++){
            b[ind]=a[i];
            ind++;
        }
        for(ll i=0;i<=in-1;i++){
            b[ind]=a[i];
            ind++;
        }


        sort(a,a+n);

        ll flag=1;

        for(ll i=0;i<n;i++){
            if(a[i]!=b[i]){
                flag=0;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
