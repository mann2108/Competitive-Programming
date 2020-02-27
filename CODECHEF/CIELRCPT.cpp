#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll p;
        cin>>p;
        /*ll count_1s=0;
        while(p){
            if(p&1){
                count_1s++;
            }
            p>>=1;
        }
        cout<<count_1s<<endl;*/
        ll arr[]={2048,1024,512,256,128,64,32,16,8,4,2,1};
        ll ans=0;
        ll ind=0;
        while(p){
            if(p>=arr[ind]){
                p-=arr[ind];
                ans++;
            }
            else{
                ind++;
            }
        }
        cout<<ans<<endl;

    }


}