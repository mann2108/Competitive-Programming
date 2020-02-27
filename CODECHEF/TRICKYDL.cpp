#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool sorted(const ll x,const ll y){return x>y;}

ll powerTwo[50]={1};


void powerTwoM(){
    for(ll i=1;i<50;i++){
        powerTwo[i]=powerTwo[i-1]+pow(2,i);
    }
}

int main(){
    powerTwoM();
    ll t;
    cin>>t;
    while(t--){
        ll a;
        cin>>a;
        ll d1=0;
        ll d2=0;
        ll i=0;
        ll temp=a;
        ll max=-1;
        while(true){

            if(a-powerTwo[i]>max){
                max=a-powerTwo[i];
                a+=temp;;
                d1++;
                d2++;
            }
            else if(a-powerTwo[i]<0){
                break;

            }
            else{
                a+=temp;
                d1++;
            }


            i++;
        }
        cout<<d1<<" "<<d2<<endl;
    }

}