/// @author mann2108
/// Problem : ZCO15002

#include<bits/stdc++.h>
using namespace std;

bool sorted(const int x, const int y){return (x>y);}

int main(){

    long long int k,n,a[100000],cnt=0,temp;
    cin>>n>>k;

    for(long long int i=0;i<n;++i){
        cin>>a[i];
    }
    sort(a,a+n,sorted);
    long long int ans=0;
    for(long long int i=0;i<n-1;++i){
            cnt=n-i-1;
        for(long long int j=i+1;j<n;++j){
                temp=a[i]-a[j];
                if(temp>=k){
                    ans+=cnt;
                    break;
                }
                else{
                    cnt--;
                }

        }
    }
    cout<<ans;
    return 0;
}

