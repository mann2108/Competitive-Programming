// UserName: mann2108
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

ll i=0;

while(test_cases--){
ll n=100000;
ll a[n],cnt=0;
char temp=' ';
for(ll i=0;temp!='\n';i++){
    cin>>a[i];
    cin.get(temp);
    cnt++;
}
sort(a,a+cnt);
ll flag=0;
ll max=0;
for(ll i=0;i<cnt;i++){
    if(a[i]==cnt-1){
        if(flag==0){
            flag=1;
        }
        else{
            max=cnt-1;
        }
    }

    else{
        if(a[i]>=max){
            max=a[i];
        }
    }

}
cout<<max<<endl;
}
return 0;

/* END OF MAIN */

}

