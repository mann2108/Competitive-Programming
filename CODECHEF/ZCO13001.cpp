/// @author mann2108
/// Problem : ZCO13001

#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

inline bool sorted(const ll x,const ll y){return x>y;}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    ll n;
    cin>>n;
    ll a[n];

    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n,sorted);

    ll sum1=0,sum2=0;
    ll fac1=n-1,fac2=1;

    for(ll i=0;i<n;i++){
        if(i!=0){
            sum1+=fac2*a[i];
            fac2++;
        }
        if(i!=n-1){
            sum2+=fac1*a[i];
            fac1--;
        }
    }
    cout<<sum2-sum1<<endl;
}
