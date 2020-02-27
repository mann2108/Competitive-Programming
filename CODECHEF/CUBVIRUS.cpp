#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n;
    cin>>n;
    
    string s;
    
    char a[n][n][n];
    vector<string> vec;
    
    for(ll i=0;i<(n*n);i++){
        cin>>s;
      
        
    }
    
    map<ll,ll> p,q,r;
    vector<ll> vec1;
    vector<ll> vec2;
    vector<ll> vec3;
    
    //cout<<(ll)(rand() % n) + 1<<endl;
    
    while(vec1.size()!=n and vec2.size()!=n and vec3.size()!=n){
        ll t = (ll)(rand() % n) + 1;
        if(!p[t]){
            p[t]=1;
            vec1.push_back(t);
        }
        if(!q[t]){
            q[t]=1;
            vec2.push_back(t);
        }
        if(!r[t]){
            r[t]=1;
            vec3.push_back(t);
        }
        
    }
    
    for(ll i=0;i<vec1.size();i++)cout<<vec1[i]<<" ";
    cout<<endl;
    for(ll i=0;i<vec2.size();i++)cout<<vec2[i]<<" ";
    cout<<endl;
    for(ll i=0;i<vec3.size();i++)cout<<vec3[i]<<" ";
    cout<<endl;
    
}
        