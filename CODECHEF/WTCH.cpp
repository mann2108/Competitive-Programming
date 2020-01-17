#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string a;
        cin>>a;
        ll cnt=0;
        for(ll i=0;i<n;i++){
            bool flag1=true;
            bool flag2=true;
            if(a[i]=='0'){
                if(i!=0){
                    if(a[i-1]=='1'){
                        flag1=false;
                    }
                }
                if(i!=n-1){
                    if(a[i+1]=='1'){
                        flag2=false;
                    }
                }
                if(flag1 && flag2){
                    cnt++;
                    a[i]='1';
                }
            }
        }
        cout<<cnt<<endl;
    }
}
