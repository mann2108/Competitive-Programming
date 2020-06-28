#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define pll pair<ll,ll>

bool sorted1(ll p1,ll p2) { return p1>p2; }
bool sorted2(pair<ll,ll> p1,pair<ll,ll> p2) { return p1.first>p2.first; }

unordered_map<ll,ll> mp;


ll solve(ll n, ll moves) {
    if(n<0) return -1;
    if(n==1) {
        return mp[1]=moves;
    }
    if(mp[n]) return mp[n];
    if(n%6==0 and n>=0) {
        return mp[n]=solve(n/6,moves+1);
    }
    if(n>=0) {
        return mp[n]=solve(n*2,moves+1);
    }
}


int main() {
    ll t;
    cin>>t;
    while(t--) {
            mp.clear();
        ll n;
        cin>>n;
        ll ans = solve(n,0);
        if(ans<0) {
            cout<<-1<<endl;
        }
        else {
            cout<<ans<<endl;
        }
    }
}
