/** SCC **/
/** author mann2108 */
#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;

using namespace std;
typedef cpp_int ll;

#define pb push_back

int main(){
    ll t;
    cin>>t;
    while(t--){

        long long int n,k;
        cin>>n>>k;
        ll a[n];

        for(long long int i=0;i<n;i++)cin>>a[i];


        ll cnt=0;

        ll same=0;
        ll inv=0;

        for(long long int  i=0;i<n;i++){
            for(long long int  j=i+1;j<n;j++){
                if(a[i]>a[j]){
                    inv+=1;
                }
                if(a[i]==a[j]){
                    same++;
                }
            }
        }

        ll x1=(k*(k+1))/2;
        ll x2=(k*(k-1))/2;
        ll gt=(n*(n-1))/2;

        //gt=gt-ls-same;
        cnt=x2*gt+k*inv;

        set<ll> st;

        for(long long int i=0;i<n;i++)st.insert(a[i]);

        if(st.size()==1 or n==1){
            cout<<"0"<<endl;
        }
        else{
            cout<<cnt<<endl;
        }


    }

}