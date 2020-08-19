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
    ll n,m;
    cin>>n>>m;
    vector<string> s(n);
    REP(i,n)cin>>s[i];
    ll vec[n+1][m+1];
    REP(i,n+1)REP(j,m+1)vec[i][j]=0;
    ll q;
    cin>>q;
    while(q--) {
        ll x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        x1-=1;x2-=1;y1-=1;y2-=1;
        vec[x1][y1]+=1;
        vec[x2+1][y2+1]+=1;
        vec[x2+1][y1]-=1;
        vec[x1][y2+1]-=1;
    }
    ll sum = 0;
    REP(i,n) {
        FOR(j,1,m) {
            vec[i][j]+=vec[i][j-1];
        }
    }

    REP(i,m) {
        FOR(j,1,n) {
            vec[j][i]+=vec[j-1][i];
        }
    }
    //REP(i,n){REP(j,m)cout<<vec[i][j]<<" ";cout<<endl;}
    FOR(i,0,n) {
        FOR(j,0,m) {
            if(vec[i][j]%2!=0) {
                ll x = s[i][j]-'0';
                cout<<(x+1)%2;
            }
            else cout<<s[i][j];
        }
        cout<<endl;
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

