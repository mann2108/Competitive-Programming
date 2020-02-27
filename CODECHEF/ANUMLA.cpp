#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll k = 1<<n;
        multiset<ll> st;
        ll x;
        while(k--){
            cin>>x;
            st.insert(x);
        }

        vector<ll> v,sol;

        st.erase(0);

        for(ll i=0;i<n;i++){
            ll first = (*st.begin());
            sol.push_back(first);
            ll sz=v.size();
            for(ll j=0;j<sz;j++){
                ll temp = first+v[j];
                v.push_back(temp);
                st.erase(st.find(temp));
            }
            v.push_back(first);
            st.erase(st.find(first));
        }

        for(ll i=0;i<sol.size();i++){
            cout<<sol[i]<<" ";
        }
        cout<<endl;

    }

}