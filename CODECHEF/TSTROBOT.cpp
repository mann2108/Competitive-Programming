#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
ll t;
cin>>t;
while(t--){
    ll n,k;
    cin>>n>>k;
    set<ll> st;
    string s;
    cin>>s;
    st.insert(k);
    for(ll i=0;i<n;i++){
        if(s[i]=='R'){
            k++;
            st.insert(k);
        }
        else{
            k--;
            st.insert(k);
        }
    }
    cout<<st.size()<<endl;
}

}