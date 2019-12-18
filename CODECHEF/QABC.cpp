/// @author mann2108
/// Problem : QUALPREL

#include<bits/stdc++.h>
#include<cstdio>

using namespace std;

#define mod 10000007

typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;

int main(){
    ll test_cases;
    cin>>test_cases;
    while(test_cases--){
        ll n;
        cin>>n;
        ll a[n],b[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<n;i++){
            cin>>b[i];
        }
        ll flag=1;
        for(int i=0;i<n-2;i++){
            if(a[i]!=b[i]){
               if(a[i]>b[i]){
                   flag=0;
                   break;
               }
               else{
                    ll cnt=b[i]-a[i];
                    a[i]+=1*cnt;
                    a[i+1]+=2*cnt;
                    a[i+2]+=3*cnt;
                    i--;
               }
            }
        }
        if(flag==1 && a[n-1]==b[n-1] && a[n-2]==b[n-2]){
            cout<<"TAK"<<endl;
        }
        else{
            cout<<"NIE"<<endl;
        }
    }
return 0;
}

