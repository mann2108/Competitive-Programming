/* HEADER DECLARATION BLOCK */

#include<bits/stdc++.h>
#include<cstdio>


using namespace std;;

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
ll a[100001]={0};
vector< pair< ll, ll> > vec;
for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    a[x]=-1;
    vec.push_back(make_pair(x,i+1));}


sort(vec.begin(),vec.end());
/*for(ll i=0;i<n;i++){

    cout<<vec[i].first<<" "<<vec[i].second<<endl;
}

cout<<endl<<endl;
*/
ll cnt=0,ind=0;;
bool flag3=false;
bool flag1=false,flag2=false;

for(ll i=1;i<n;i++){
    if(vec[i].first==vec[i-1].first){
        cnt++;
        //cout<<"cnt:"<<cnt<<endl;
    }
    else{
        if(cnt==0){
          //  cout<<"cnt is zeroz"<<" "<<cnt<<" "<<ind<<endl;
            ind=i;
            continue;}
        else{
           //cout<<ind<<" "<<cnt+ind<<endl;

            for(ll j=ind;j<=cnt+ind;j++){
                for(ll k=j+1;k<=cnt+ind;k++){
             //       cout<<vec[j].first<<" "<<vec[k].first<<endl;
               //     cout<<"INLOOP "<<vec[j].second<<" "<<vec[k].second<<" "<<a[vec[j].second]<<" "<<a[vec[k].second]<<endl;
                    if(a[vec[j].second]==-1){
                        flag1=true;}
                    if(a[vec[k].second]==-1){
                        flag2=true;}
                    if(flag1==flag2 && flag1==true){
                        flag3=true;
                        break;}
                    else{
                        flag1=false;
                        flag2=false;
                    }
                }
                if(flag3==true){
                    break;
                }
            }
            cnt=0;
            ind=i;
            if(flag3==true){
                break;
            }
        }
    }
}

if(cnt!=0){
        //cout<<"yahoo"<<endl;
        for(ll j=ind;j<=cnt+ind;j++){
                for(ll k=j+1;k<=cnt+ind;k++){
          //             cout<<vec[j].first<<" "<<vec[k].first<<endl;
            //           cout<<"INLOOP "<<vec[j].second<<" "<<vec[k].second<<" "<<a[vec[j].second]<<" "<<a[vec[k].second]<<endl;
                     if(a[vec[j].second]==-1){
                         flag1=true;}
                     if(a[vec[k].second]==-1){
                        flag2=true;}
                     if(flag1==flag2 && flag1==true){
                        flag3=true;
                         break;}
                     else{
                        flag1=false;
                        flag2=false;
                     }
                 }
                 if(flag3==true){
                    break;
                 }
            }
}
if(flag3){
    cout<<"Truly Happy"<<endl;
}
else{
    cout<<"Poor Chef"<<endl;
}
}
return 0;
/* END OF MAIN */
}