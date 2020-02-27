    #include<bits/stdc++.h>
    using namespace std;
    typedef long long int ll;

    #define pb push_back

    bool debug(ll temp=0){cout<<"Debug:"<<temp<<endl;}
    bool sorted(ll p1,ll p2){return p1>p2;}
    bool sorted(pair<ll,ll> p1,pair<ll,ll> p2){return p1.first>p2.first;}

    const ll mod = 1e9+7;
    int main(){
       ll t;
       cin>>t;
       while(t--){
            ll n;
            cin>>n;
            ll a[n];
            map<ll,ll> mp;
            ll val,count;
            for(ll i=0;i<n;i++){
                cin>>a[i];
                mp[a[i]]+=1;
                if(mp[a[i]]>=n/2){
                    val=a[i];
                    count=mp[a[i]];
                }
            }
            cout<<"0  "<<val<<endl;
       }
    }