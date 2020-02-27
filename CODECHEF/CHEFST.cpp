#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll t;
    cin>>t;
    while(t--){

        ll m,x,y;
        cin>>x>>y>>m;

        ll z=(m*(m+1));

        ll p1=x+y-z;
        ll p2=x-y;
        ll p3=y-x;

        if(p1>=p2 && p1>=p3){
                cout<<p1<<endl;
        }
        else if(p2>=p3 && p2>=p1){
            cout<<p2<<endl;
        }
        else if(p3>=p1 && p3>=p2){
            cout<<p3<<endl;
        }
        else{
            cout<<1/0;
        }
    }
}