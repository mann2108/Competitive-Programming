/// @author mann2108
/// Problem : STRNO (Strange Number)

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pb push_back
#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

/**
 * N = p1^k1 . p2^k2 ... pq^kq.
 * No. of divisor of number should be: -
 * d(N) = (k1+1) . (k2+1) ... (kq+1)
 *
 * Question is now converted as:
 * Is N can be represented as product of k number which are greater then 1.?
 */

bool check(ll x,ll k){
    ll cnt = 0;
    for(ll i=2;i*i<=x;i++)while(x%i==0)x/=i,cnt++;
    if(x>2)cnt++;
    if(cnt<k)return false;
    else return true;
}

int main(){
    FAST_IO
    ll t;
    cin>>t;
    while(t--){
        ll x,k;
        cin>>x>>k;
        if(check(x,k))cout<<1<<endl;
        else cout<<0<<endl;
    }
}

