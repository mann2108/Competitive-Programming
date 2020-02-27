    #include<bits/stdc++.h>
    using namespace std;
    typedef long long int ll;

    #define pb push_back

    bool debug(ll temp=0){cout<<"Debug:"<<temp<<endl;}
    bool sorted(ll p1,ll p2){return p1>p2;}
    bool sorted(pair<ll,ll> p1,pair<ll,ll> p2){return p1.first>p2.first;}

    const ll mod = 1e9+7;
    int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
       ll t;
       cin>>t;
       while(t--){
           ll n,m;
           cin>>n>>m;
           ll a[n];
           ll b[m];
           ll c[n];
           unordered_map<ll,ll> mp1;
           for(ll i=0;i<n;i++){cin>>a[i];mp1[a[i]]=a[i];}
           for(ll i=0;i<m;i++)cin>>b[i];


           for(ll i=0;i<m;i++){
                for(ll j=b[i];j<=1e4+1;j+=b[i]){
                    if(mp1[j]){
                        mp1[j]=min(mp1[j],j/b[i]);
                    }
                }
           }
           ll sum=0;
           for(ll i=0;i<n;i++){
                sum+=mp1[a[i]];

           }
           cout<<sum<<endl;
       }
    }