///ILLUMINATI Season 5.
///Multi Source BFS

#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;

    while(t--){

        ll n,m;
        cin>>n>>m;
        ll a[n][m];
        pair<ll,ll> d[n][m];

        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                cin>>a[i][j];
                d[i][j]={0,-1};
            }
        }

        queue<pair<ll,ll> > q;

        for(ll i=0;i<n;i++){
            if(a[i][0]==1){
                q.push({i,0});
                d[i][0]={1,i};
            }
        }

        while(!q.empty()){

            pair<ll,ll> p1 = q.front();
            q.pop();

            ll row = p1.first;
            ll col = p1.second;

            bool f1=false,f2=false,f3=false,f4=false;

            if(row-1>=0)f1=true;
            if(row+1<n)f2=true;
            if(col-1>=0)f3=true;
            if(col+1<m)f4=true;

            if(f1 and a[row-1][col]==1 and d[row-1][col].first==0){
                q.push({row-1,col});
                d[row-1][col]={d[row][col].first+1,d[row][col].second};
            }
            if(f2 and a[row+1][col]==1 and d[row+1][col].first==0){
                q.push({row+1,col});
                d[row+1][col]={d[row][col].first+1,d[row][col].second};
            }
            if(f3 and a[row][col-1]==1 and d[row][col-1].first==0){
                q.push({row,col-1});
                d[row][col-1]={d[row][col].first+1,d[row][col].second};
            }
            if(f4 and a[row][col+1]==1 and d[row][col+1].first==0){
                q.push({row,col+1});
                d[row][col+1]={d[row][col].first+1,d[row][col].second};
            }
        }

        pair<ll,pair<ll,ll> > sol({LLONG_MAX,{-1,-1}});

        for(ll i=0;i<n;i++){
            if(a[i][m-1]==1){
                if(d[i][m-1].first!=0 and d[i][m-1].first<sol.first){
                    sol={d[i][m-1].first,{d[i][m-1].second,i}};
                }
            }
        }

        if(sol.first==LLONG_MAX)cout<<-1<<endl;
        else cout<<(sol.second.first)+1<<" "<<(sol.second.second)+1<<" "<<(sol.first)<<endl;
    }
}
