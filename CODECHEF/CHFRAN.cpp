#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back

int main(){

    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll temp=n;
        if(n==2){
            ll l1,r1,l2,r2;
            cin>>l1>>r1>>l2>>r2;
            if(l1>l2){
                swap(l1,l2);
                swap(r1,r2);
            }
            if(r1>=l2){
                cout<<-1<<endl;
            }
            else{
                cout<<0<<endl;
            }

        }
        else{
            vector<ll> points;
            unordered_map<ll,ll> entry,exit;
            while(temp--){
                ll l,r;
                cin>>l>>r;
                if(entry[l]==0 and exit[l]==0)
                points.pb(l);
                entry[l]+=1;
                if(entry[r]==0 and exit[r]==0)
                points.pb(r);
                exit[r]+=1;
            }
            sort(points.begin(),points.end());
            ll cnt = 0;
            ll ans = LLONG_MAX;
            for(ll i=0;i<points.size()-1;i++){
                cnt=cnt+entry[points[i]]-exit[points[i]];
                if(exit[points[i]]>0){
                    if(entry[points[i+1]]>0){
                        ans = min(ans,cnt);
                    }
                }
            }

            if(n==1){
                cout<<-1<<endl;
            }
            else if(ans==LLONG_MAX){
                cout<<-1<<endl;
            }
            else{
                cout<<ans<<endl;
            }
        }
    }
}