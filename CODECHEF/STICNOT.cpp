/// @author mann2108
/// Problem : STICNOT (Greedy BFS on TREE)

#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

ll bigNo  = 1e9+10;

#define pb push_back

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;

    cin>>t;

    while(t--){

        ll n,node;
        cin>>n;

        vector<ll> a;
        vector<ll> b;

        ll temp=n-1;

        vector<ll> adj[n+1];

        while(temp--){
            ll u,v,x;
            cin>>u>>v>>x;
            adj[u].pb(v);
            adj[v].pb(u);
            b.pb(x);
        }

        for(ll i=0;i<n;i++){
            cin>>node;
            a.pb(node);
        }

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        vector<ll> visited(n+1,false);

        ll ind1=0;
        ll ind2=a.size()-1;
        ll ind3=0;
        ll ind4=b.size()-1;

        /// BFS on TREE

        queue<ll> q;
        visited[n]=true;
        q.push(n);

        vector<ll> parentEdge(n+1,LLONG_MAX);

        ll coin=0;

        node = q.front();
        q.pop();
        for(ll v:adj[node]){
            if(!visited[v]){
                parentEdge[v]=b[ind4--];
                visited[v]=true;
                q.push(v);
            }
        }


        if(b[ind4+1]<=a[ind2]){
            ind2--;
        }
        else{
            a[ind1++]=bigNo;
            coin++;
        }

        while(!q.empty()){

            node = q.front();
            q.pop();


            if(parentEdge[node]>a[ind2]){
                a[ind1++]=bigNo;
                coin+=1;
                for(ll v:adj[node]){
                    if(!visited[v]){
                        parentEdge[v]=b[ind4--];
                        q.push(v);
                        visited[v]=true;
                    }
                }
            }

            else{

                for(ll v:adj[node]){
                    if(!visited[v]){
                        parentEdge[v]=b[ind4--];
                        visited[v]=true;
                        q.push(v);
                    }
                }

                if(b[ind4+1]<=a[ind2]){
                    ind2--;
                }

                else{
                    a[ind1]=bigNo;
                    ind1++;
                    coin+=1;
                }

            }
        }

        cout<<coin<<endl;
    }
}