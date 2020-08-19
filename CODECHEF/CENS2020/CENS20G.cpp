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
        string s;
        cin>>s;
        ll n = s.length();
        ll x1,y1;
        cin>>x1>>y1;
        ll q;cin>>q;
        vector<ll> a(4,0);
        REP(i,n){
            if(s[i]=='R')a[0]+=1;
            if(s[i]=='L')a[1]+=1;
            if(s[i]=='U')a[2]+=1;
            if(s[i]=='D')a[3]+=1;
        }

        while(q--) {
            ll x,y;
            cin>>x>>y;
            if(x<=x1 and y<=y1) {
                x = abs(x-x1);
                y = abs(y-y1);
                if(x<=a[1] and y<=a[3])cout<<"YES "<<x+y<<endl;
                else cout<<"NO"<<endl;
            }
            else if(x<=x1 and y>=y1) {
                x = abs(x-x1);
                y = abs(y-y1);
                if(x<=a[1] and y<=a[2])cout<<"YES "<<x+y<<endl;
                else cout<<"NO"<<endl;
            }
            else if(x>=x1 and y<=y1) {
                x = abs(x-x1);
                y = abs(y-y1);
                if(x<=a[0] and y<=a[3])cout<<"YES "<<x+y<<endl;
                else cout<<"NO"<<endl;
            }
            else {
                x = abs(x-x1);
                y = abs(y-y1);
                if(x<=a[0] and y<=a[2])cout<<"YES "<<x+y<<endl;
                else cout<<"NO"<<endl;
            }
        }
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

