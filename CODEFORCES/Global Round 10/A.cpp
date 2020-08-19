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
#define FOR(i, begin, end) for(int i=(begin),i##_end_=(end);i<i##_end_;i++)
#define IFOR(i, begin, end) for(int i=(end)-1,i##_begin_=(begin);i>=i##_begin_;i--)
#define REP(i, n) FOR(i,0,n)
#define IREP(i, n) IFOR(i,0,n)
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
        REP(i,n)cin>>a[i];
        bool flag = true;
        FOR(i,1,n)if(a[i]!=a[i-1])flag = false;
        if(flag)cout<<n<<endl;
        else cout<<1<<endl;
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

