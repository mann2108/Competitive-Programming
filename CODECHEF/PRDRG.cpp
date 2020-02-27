/* HEADER DECLARATION BLOCK */

#include<bits/stdc++.h>
#include<cstdio>


using namespace std;

/* CONSTANT DECALRATION BLOCK */
#define mod 10000007

/* ALIAS CREATION BLOCK */

typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;


/* START OF MAIN */
int main(){
ll test_cases;
cin>>test_cases;
ll n=test_cases;
ll a[n];
for(ll i=0;i<n;i++){
    cin>>a[i];
}
for(ll i=0;i<n;i++){
    if(a[i]==1){
        cout<<"1 2 ";
    }
    else if(a[i]==2){
        cout<<"1 4 ";
    }
    else{
        ll sum=2;
        ll ans;
        for(ll j=3;j<=a[i];j++){
            if(j%2==0){
                ans=sum;
                sum+=ans;
            }
            else{
                ans=sum+1;
                sum+=ans;
            }
        }
        cout<<ans<<" "<<ll(pow(2,a[i]))<<" ";
    }
}
return 0;
/* END OF MAIN */
}