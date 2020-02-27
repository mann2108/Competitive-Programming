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
        if(n==0){
            cout<<"1 0 0"<<endl;
        }
        else{
            ll x,y,cnt=0;
            x=(ll)(n/26);
            y=(ll)(n&);
            if(y==0){
                cnt=pow(2,x-1);
                cout<<"0 0 "<<cnt<<endl;
            }
            else if(y>0 && y<=2){
                cnt=pow(2,x);
                cout<<cnt<<" 0 0"<<endl;
            }
            else if(y>2 && y<=10){
                cnt=pow(2,x);
                cout<<"0 "<<cnt<<" 0"<<endl;
            }
            else{
                cnt=pow(2,x);
                cout<<"0 0 "<<cnt<<endl;
            }


        }

}
return 0;


/* END OF MAIN */
}