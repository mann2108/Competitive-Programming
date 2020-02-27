#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    while(t--){

        ll m,n;

        cin>>m>>n;

        if(m%n==0 || n%m==0){
            cout<<"Ari"<<endl;
        }
        else{
            ll cnt=1;
            while(true){

                cnt++;
                if(m>n){
                    if((m/n)>=2){
                        break;
                    }
                    else{
                        m-=n;
                    }
                }
                else{
                   if((n/m)>=2){
                        break;
                   }
                   else{
                        n-=m;
                   }

                }
            }

            if(cnt%2==0){
                cout<<"Ari"<<endl;
            }
            else{
                cout<<"Rich"<<endl;
            }

        }
    }


}