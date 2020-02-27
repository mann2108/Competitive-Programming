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
    ll n;
    cin>>n;
    ll temp=n;
    ll cnt3=0;
    ll counter=n+1;
    temp=counter;
    while(true){

         for(ll i=0;temp!=0;i++){
            if(temp==3)
                cnt3++;
            temp=temp/10;
         }


          if(cnt3>=3){
            break;
          }
         counter++;
         temp=counter;
         cnt3=0;
    }
    cout<<counter<<endl;


}
return 0;


/* END OF MAIN */
}