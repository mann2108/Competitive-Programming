/**
CodeChef Id:- mann2108
Chapter Name:- IllUMINATI (CHARUSAT)
**/
 
/** Problem Code:- SPBRD **/
 
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m,rooks;
        cin>>n>>m>>rooks;
 
        ll row_cnt=n;
 
        //USE M FOR n*m BOARD
        ll col_cnt=m;
 
        ll row[n]={0};
 
        //USE M FOR n*m BOARD
        ll col[m]={0};
 
        while(rooks--){
                ll r,c;
                cin>>r>>c;
                if(row[r-1]!=-1){
                    row[r-1]=-1;
                    row_cnt-=1;
                }
                if(col[c-1]!=-1){
                    col[c-1]=-1;
                    col_cnt-=1;
                }
        }
 
        ll p=row_cnt*col_cnt;
        ll q=n*m;
 
        if(p==0){
            cout<<"0"<<endl;
        }
        else{
           ll gcdPQ=__gcd(p,q);
           p/=gcdPQ;
           q/=gcdPQ;
           cout<<p<<" "<<q<<endl;
        }
 
    }
} 