// Usewr
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
    ll n,m;
    cin>>n>>m;
    ll a[m];
    ll cnt=0,cnt2=0,cnt3=0,v=0;
    ll flag1=1;
    ll flag2=1;
    ll flag3=1;
    ll flag4=0,x1=0,x2=0;
    while(n--){

        string s1,s2;
        cin>>s1>>s2;
        ll flag5=0;
        if(s1[0]=='c'){
                x1++;

            for(ll i=0;i<m;i++){
                if(s2[i]=='0'){
                    flag1=0;
                }
            }

        }

        else{
            v++;
            for(ll i=0;i<m;i++){



                    if(s2[i]=='1'){
                        cnt++;
                    }


                if(flag5!=1){
                    if(s2[i]=='0'){
                        cnt3++;
                        flag5=1;
                    }
                }
            }

            if(cnt==m){
                flag3=0;
            }
            else{
                cnt=0;
            }
        }
    }

    if(cnt3==v){
        flag2=0;
    }

    if(flag1==0){
        cout<<"INVALID"<<endl;
    }

    else if(flag3==0){
        cout<<"WEAK"<<endl;
    }
    else {
        cout<<"FINE"<<endl;
    }

}
return 0;
/* END OF MAIN */
}