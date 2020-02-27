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



while(test_cases--){
ll n,ans=0;
cin>>n;
ll a[n],b[n+1];
memset(b,0,sizeof(b));
for(ll i =0;i<n;i++){
    cin>>a[i];
    if((a[i]<=n && a[i]>=1)){

            if(b[a[i]]==0){
                b[a[i]]=1;
            }

       }
}

for(ll i=1;i<n+1;i++){
   if(b[i]==0){
    ans++;
   }
}
cout<<ans<<endl;

}
return 0;


/* END OF MAIN */
}