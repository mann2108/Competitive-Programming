#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define pll pair<ll,ll>

bool sorted1(ll p1,ll p2) { return p1>p2; }
bool sorted2(pair<ll,ll> p1,pair<ll,ll> p2) { return p1.first>p2.first; }

int main() {
    ll t;
    cin>>t;
    while(t--) {
        ll x,y,n;
        cin>>x>>y>>n;
        ll temp = n%x;
        if(temp>=y) {
            n = n - temp + y;
        }
        else {
            n = n - temp;
            n-=(x-y);
        }
        cout<<n<<endl;
    }
}
