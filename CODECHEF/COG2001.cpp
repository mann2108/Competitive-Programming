///@author mann2108
///CODIGO 2K20

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pb push_back
#define pll pair<ll,ll>

bool sorted1(ll p1,ll p2){return p1>p2;}
bool sorted2(pll p1,pll p2){return p1.first>p2.first;}

void debug(ll num = 0){cout<<"Debug: "<<num<<endl;}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n,p,q;
        cin>>n>>p>>q;
        ll k[n],a[n],s[n];
        for(ll i=0;i<n;i++)cin>>k[i];
        for(ll i=0;i<n;i++)cin>>a[i];
        for(ll i=0;i<n;i++)cin>>s[i];

        string s1;
        cin>>s1;
        vector<pair<ll,ll> > vec;
        for(ll i=0;i<n;i++){
            vec.pb({(k[i]+a[i]),i});
        }
        sort(vec.begin(),vec.end());
        sort(s,s+n);

        ll fa=0,fk=0,da=0,dk=0;

        ll ind1=0;
        ll ind2=0;

        while(ind1!=n and ind2!=n){

            if(s[ind1]==vec[ind2].first){
                if(s1[vec[ind2].second]=='0'){
                    fk+=k[vec[ind2].second];
                    fa+=a[vec[ind2].second];
                }
                else{
                    dk+=k[vec[ind2].second];
                    da+=a[vec[ind2].second];
                }
                ind1+=1;
                ind2+=1;
            }
            else{
                if(s[ind1]>vec[ind2].first){
                    ind2++;
                }
                else{
                    ind1++;
                }
            }
        }

        if(p*fk+q*fa>p*dk+q*da){
            cout<<"Frost"<<endl;
        }
        else{
            cout<<"DustinKiller"<<endl;
        }



    }
}

