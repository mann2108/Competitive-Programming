/// @author mann2108
/// Problem : SQRDSUB (Squared Subsequences)

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pb push_back
#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    FAST_IO
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];

        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%4==0)a[i]=2;
            else if(a[i]%2==0)a[i]=1;
            else a[i]=0;
        }

        ll sub_sequence_ones = 0;

        ll pre[n]={},post[n]={};
        ll cnt = 0;

        for(ll i=0;i<n;i++){
            if(a[i]==0)cnt++;
            else{
                if(a[i]==1)pre[i]=cnt;
                cnt=0;
            }
        }
        cnt=0;
        for(ll i=n-1;i>=0;i--){
            if(a[i]==0)cnt++;
            else{
                if(a[i]==1)post[i]=cnt;
                cnt=0;
            }
        }
        cnt = 0;
        for(ll i=0;i<n;i++){
            if(a[i]==1){
                sub_sequence_ones+=pre[i];
                sub_sequence_ones+=post[i];
                sub_sequence_ones+=(pre[i]*post[i]);
                cnt+=1;
            }
        }

        sub_sequence_ones+=cnt;

        cout<<(((n*(n+1))/2) - sub_sequence_ones)<<endl;
    }
}

