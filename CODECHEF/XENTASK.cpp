
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
        ll xenny[n],yanna[n];
        ll sumX1=0,sumX2=0,sumY1=0,sumY2=0;
        for(ll i=1;i<=n;i++){
            cin>>xenny[i];
            if(i%2!=0){
                sumX1=sumX1+xenny[i];
            }
            else{
                sumX2=sumX2+xenny[i];
            }
        }
        for(ll i=1;i<=n;i++){
            cin>>yanna[i];
            if(i%2!=0){
                sumY1=sumY1+yanna[i];
            }
            else{
                sumY2=sumY2+yanna[i];
            }
        }
        ll time_1=sumY1+sumX2;
        ll time_2=sumX1+sumY2;
        if(time_1<=time_2)
            cout<<time_1<<endl;
        else
            cout<<time_2<<endl;
}
return 0;


/* END OF MAIN */
}
