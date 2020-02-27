#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back

int main(){
    /**
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    */

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;

    while(t--){
        ll p,m,n;
        cin>>p>>m>>n;

        ll ans;

        if(n>=p-1){

            ll temp=(p-1)/m;
            if((p-1)%m!=0){
                temp++;
            }
            ans=2+(temp-1)*m;
        }
        else{
            ll temp=n/m;
            ll remain=n-(temp*m);
            if(remain==0){
                ans=2+(temp-1)*m;
            }
            else{
                ans=2+remain+(temp*m);
            }
        }

        cout<<ans<<endl;
    }
}