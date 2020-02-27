/** DSU Implementation Optimize */

#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

ll Max = 1e4+5;

vector<ll> s(Max);
vector<ll> parent(Max);

ll  find_set(ll x){
    if(parent[x]==x)return x;
    return parent[x]=find_set(parent[x]);
}

void union_set(ll x,ll y){
    if(s[x]>s[y]) parent[y]=x;
    else if(s[y]>s[x]) parent[x]=y;
}

int main(){
    ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--){

        s.clear();
        parent.clear();

        ll n;
        cin>>n;

        for(ll i=1;i<=n;i++){
            cin>>s[i];
            parent[i]=i;
        }
        ll q;
        cin>>q;
        while(q--){

            ll x;

            cin>>x;
            if(x==0){

                ll a,b;

                cin>>a>>b;
                ll p1,p2;

                p1=find_set(a);
                p2=find_set(b);

                if(p1==p2)cout<<"Invalid query!"<<endl;
                else union_set(p1,p2);
            }
            else{
                ll x;
                cin>>x;
                cout<<find_set(x)<<endl;

            }
        }
    }
}