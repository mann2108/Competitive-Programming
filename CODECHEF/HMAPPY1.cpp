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

ll n,q,k;
cin>>n>>q>>k;
if(n<=ll(pow(10,3))&& q<=3*(ll(pow(10,3)))){





ll a[n];

for(ll i=0;i<n;i++){
    cin>>a[i];
}
string s;
cin>>s;
ll cnt3=0;
for(ll i=0;i<q;i++){
    if(s[i]=='!'){
            cnt3++;
            if(cnt3==n){
                cnt3=0;
            }
     }
    if(s[i]=='?'){
        ll b[n];
        for(ll i=cnt3;i<n;i++){
            b[i]=a[i-cnt3];
        }
        for(ll i=0;i<cnt3;i++){
            b[i]=a[n-cnt3];
        }
        for(ll i=0;i<n;i++){
            a[i]=b[i];
        }
        cnt3=0;
        ll cnt=0;
        ll cnt2=0;
        for(ll i=0;i<n-1;i++){
            if(a[i]==a[i+1] && a[i]==1){
                cnt++;
                if(cnt>=cnt2){
                    cnt2=cnt;
                   // cout<<cnt2<<endl;
                }
            }
            else{
                cnt=0;
            }
        }
        ll ans=cnt2+1;
        if(ans<=k){

            cout<<ans<<endl;
        }
        else{
            cout<<k<<endl;
        }
    }
}



























}
else{

    ll a[n];

ll cnt1=0,cnt2=-1;
ll ind3=0,indF;

ll secondMax=-1;

for(ll i=0;i<n;i++){
    cin>>a[i];
    if(a[i]==1){

        cnt1++;
        if(cnt1>=cnt2){
            ind3=i;
            cnt2=cnt1;

        }
    }
    else{
        cnt1=0;
    }
}

//cout<<secondMax<<" "<<cnt2<<endl;
ll ind1,ind2;


bool flag1=true,flag2=true;

for(ll i=0,j=n-1;i<n,j>=0;i++,j--){
    if(a[i]==0 && flag1==true){
        ind1=i;
        flag1=false;
    }
    if(a[j]==0 && flag2==true){
        ind2=j;
        flag2=false;
    }

}
//cout<<ind1<<" "<<ind2<<" "<<ind3<<endl;
for(ll i=ind3-cnt2-1;i<=ind3;i++){
    a[i]=0;
}
ll cnt4=0,cnt5=0,cnt6=0;;
for(ll i=0;i<n;i++){
    if(a[i]==1){

        cnt4++;
        if(cnt4>=cnt5){
            cnt5=cnt4;

        }
    }
    else{
        cnt4=0;
    }
}
secondMax=cnt5;


ll maxF=0;
ll max1=cnt2;
ll max2=(n-ind2-1)+(ind1);
//cout<<max1<<" "<<max2<<endl;
if(max1>=max2){
    indF=ind3-cnt2;
    maxF=max1;
}
else{
    maxF=max2;
    indF=ind2;
}
//cout<<indF<<endl;
if(q==0){
while(true);
}
else{
ll arr[maxF+1];
if(maxF%2==0){
   ll temp1=maxF;
   ll temp2=maxF/2+1;
   ll it=maxF/2;
   for(ll i=0;i<=it;i++){
    arr[i]=temp1;
    temp1--;
   }
   temp1+=2;
   for(ll i=it+1;i<=maxF;i++){
    arr[i]=temp1;
    temp1++;
   }
}
else{
   ll temp1=maxF;
   ll temp2=maxF/2+1;
   ll it=maxF/2;
   for(ll i=0;i<=it;i++){
    arr[i]=temp1;
    temp1--;
   }
   temp1++;
   for(ll i=it+1;i<=maxF;i++){
    arr[i]=temp1;
    temp1++;
   }

}

/*cout<<endl;
for(ll i=0;i<maxF+1;i++){
    cout<<arr[i]<<"*";
}
cout<<endl;
*/
ll cnt3=indF-(n-maxF-1);
if(cnt3<0){
    cnt3=-cnt3;
    cnt3=n-cnt3;
}
//cout<<cnt3<<endl;
//cout<<maxF<<" "<<cnt3<<" "<<cnt2<<" "<<cnt1<<endl;
string s;
cin>>s;

for(ll i=0;i<q;i++){

    if(s[i]=='!'){
            cnt3++;
            cnt3=cnt3%n;

     }
    if(s[i]=='?'){
       ll ans=maxF;
       if(maxF==n){
        ans=maxF;
       }
       else if(cnt3<maxF){

        ans=arr[cnt3];
        if(ans<secondMax){
            //cout<<"ans:"<<ans<<" SecondMax:"<<secondMax<<endl;
            ans=secondMax;
        }
       }
       else{
        //ans=maxF;
       }
       if(ans<=k){
          cout<<ans<<endl;
        }
        else{
            cout<<k<<endl;
        }
    }
}
//}
}








}

return 0;
/* END OF MAIN */
}

