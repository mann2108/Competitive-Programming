/// @author mann2108

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pb push_back
#define pf push_front
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define in insert
#define rm remove
#define pll pair<ll,ll>
#define fi first
#define se second
#define ALL(x) (x).begin(), (x).end()
#define endl "\n"

bool sorted1(ll p1,ll p2) { return p1>p2; }
bool sorted2(pll p1,pll p2) { return p1.fi>p2.fi; }

void debug(ll p = 1) { cout<<"Hello "<<p<<endl; }

void solve() {
    ll t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)cin>>a[i];
        ll sum = 0;
        for(ll i=0;i<n;i++) {
            for(ll j=i+1;j<n;j++) {
                if((a[i]&a[j])==a[i])sum+=1;
            }
        }
        cout<<sum<<endl;
    }
}

int main() {
    fastio
    #ifndef ONLINE_JUDGE
    freopen("../../in.txt", "r", stdin);
    freopen("../../out.txt", "w", stdout);
    #endif
    solve();
}

