/// @author mann2108
/// Problem : CHEFPRMS

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll t;
    cin>>t;
    vector <ll> vec;
    while(t--){
        ll b[]={0,1,2,3,4,5,6,7,8,9,10,11,13,14,15,17,18,19,22,23,26,33,34,38,46,51,58,62,82};
        ll n;
        cin>>n;
        ll flag=1;
        for(int i=0;i<29;i++){
            if(n==b[i]){
                flag=0;
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
