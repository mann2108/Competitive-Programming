#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool sorted(const ll x,const ll y){return x>y;}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n,sorted);
        bool flag1=true,flag2=true;
        ll x,y;
        for(ll i=0;i<=n-2;i++){
            if(a[i]==a[i+1] && flag1){
                x=a[i];
                i++;
                flag1=false;
            }
            else if(a[i]==a[i+1] && flag2){
                y=a[i];
                i++;
                flag2=false;
                break;
            }
        }
        if(flag1 || flag2){
            cout<<"-1"<<endl;
        }
        else{
            cout<<x*y<<endl;
        }

    }
}
