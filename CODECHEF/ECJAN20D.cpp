///@author mann2108
///Problem : ECJAN20D (Encoding/Poker Chips)

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back

bool sort1(ll p1,ll p2){return p1>p2;}
bool sort2(pair<ll,ll> p1,pair<ll,ll> p2){return p1.first>p2.first;}

void debug(ll n=1){cout<<"Debug:"<<n<<endl;}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n,q;
        cin>>n>>q;
        stack<ll> st;
        vector<bool> mp(100001,false);

        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            if(!mp[x])st.push(x),mp[x]=true;
        }

        while(q--){
            ll q1;
            cin>>q1;
            if(q1==1){
                ll len;
                cin>>len;
                for(ll i=0;i<len;i++){
                    ll x;
                    cin>>x;
                    if(mp[x])continue;
                    mp[x]=true;
                    st.push(x);
                }
            }
            else{
                ll len;
                cin>>len;
                for(ll i=0;i<len && st.size()>=1;i++){
                    ll temp = st.top();
                    st.pop();
                    mp[temp]=false;
                }
            }
        }

        while(!st.empty()){
            cout<<st.top()<<" ";
            st.pop();
        }
        cout<<endl;

    }
}
