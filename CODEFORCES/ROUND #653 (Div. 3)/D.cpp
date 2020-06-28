#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define pll pair<ll,ll>
bool sorted1(ll p1,ll p2) { return p1>p2; }
bool sorted2(pair<ll,ll> p1,pair<ll,ll> p2) { return p1.first>p2.first; }

int main() {
    fastio;
    ll t;
    cin>>t;
    while(t--) {
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n);

        for(ll i=0;i<n;i++){
            cin>>a[i];
            a[i]%=k;
        }
        vector<ll> b(n,0);
        sort(a.begin(),a.end());
        ll cnt = 1;
        ll ans = 0;
        if(a[0]!=0) {
            b[0] = (cnt)*k-a[0];
            ans = max(ans,b[0]);
        }
        ll prev = a[0];
        for(ll i=1;i<n;i++) {
            if(a[i]==0) continue;
            if(a[i]==prev) {
                cnt++;
            }
            else {
                cnt=1;
            }
            b[i] = (cnt)*k-a[i];
            ans = max(ans,b[i]);
            prev = a[i];
        }

        if(ans==0) {
            cout<<ans<<endl;
        }
        else
        cout<<ans+1<<endl;
    }
}
