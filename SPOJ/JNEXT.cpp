/// @author mann2108
/// Problem : SPOJ JNEXT

#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

bool sorted(const ll x,const ll y){return x>y;}

int main(){

    ll t;
    cin>>t;

    while(t--){

        ll n;
        cin>>n;
        vector<ll> vec1;
        ll x;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
            vec1.push_back(a[i]);
        }

        sort(a,a+n,sorted);
        bool flag=true;
        for(ll i=0;i<n;i++){
            if(a[i]!=vec1[i]){
                flag=false;
            }
        }

        if(!flag){
            vector<ll> vec2;
            ll temp=-2;

            for(ll i=n-1;i>0;i--){
                if(vec1[i-1]>=vec1[i]){
                        vec2.push_back(vec1[i]);
                        vec1[i]=-1;
                }
                else{
                        vec2.push_back(vec1[i]);
                        vec1[i]=-1;
                        temp=vec1[i-1];
                        vec2.push_back(vec1[i-1]);
                        vec1[i-1]=-1;
                        break;

                }
            }

            sort(vec2.begin(),vec2.end());

            for(ll i=0;i<vec1.size();i++){
                if(vec1[i]!=-1){
                    cout<<vec1[i];
                }
                else{
                    break;
                }
            }
            for(ll i=0;i<vec2.size();i++){
                if(vec2[i]>temp){
                    cout<<vec2[i];
                    vec2[i]=-1;
                    break;
                }
            }

            for(ll i=0;i<vec2.size();i++){
                if(vec2[i]!=-1){
                    cout<<vec2[i];
                }
            }
            cout<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
}


