/**
Codechef Id:- mann2108
Problem Code: -SUMAGCD
*/

#include<bits/stdc++.h>

typedef long long int ll;
using namespace std;


int main(){
    ll t;
    cin>>t;
    while(t--){

        ll n;
        cin>>n;

        ll arr[n];
        set<ll> st;

        for(ll i=0;i<n;i++){
            cin>>arr[i];
            st.insert(arr[i]);
        }

        n=st.size();

        if(n==1){
            cout<<arr[0]+arr[0] <<endl;
        }
        else{

                ll a[n];

                set<ll> :: iterator it;
                ll i=0;
                for(it=st.begin();it!=st.end();it++){
                    a[i]=(*it);
                    i++;
                }

                ll dp1[n];
                dp1[0]=a[0];

                for(ll i=1;i<n;i++){
                    dp1[i]=__gcd(dp1[i-1],a[i]);
                }

                ll gcdExcept[n];
                gcdExcept[n-1]=dp1[n-2];
                ll gcd=a[n-1];

                for(ll j=n-2;j>=0;j--){
                    gcd=__gcd(gcd,a[j+1]);
                    ll temp=__gcd(dp1[j-1],gcd);
                    gcdExcept[j]=temp;
                }

                ll max=INT_MIN;
                for(ll i=0;i<n;i++){
                    ll ans=a[i]+gcdExcept[i];
                    if(ans>max){
                        max=ans;
                    }
                }

                cout<<max<<endl;

        }

    }
}