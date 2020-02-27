/**
CodeChef Id:- mann2108
Chapter Name:- IllUMINATI (CHARUSAT)
**/
 
#include<bits/stdc++.h>
 
typedef long long int ll;
typedef long double ld;
 
using namespace std;
/** Think like an Isosceles triangle **/
 
void solve_LIKTRI(){
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++){
 
        ll choice;
        ld angle;
        
        cin>>choice>>angle;
 
        switch(choice){
 
            case 1:cout<<(180-angle)/2<<" "<<(180-angle)/2<<endl;break;
            case 2:if(angle>=90){cout<<"-1"<<endl;}else{cout<<angle<<" "<<180-2*angle<<endl;}break;
            case 3:if(angle>=90){cout<<"-1"<<endl;}else{cout<<180-2*angle<<" "<<angle<<endl;}break;
            case 4:if(angle>=90){cout<<"-1"<<endl;}else{cout<<180-2*angle<<" "<<angle<<endl;}break;
            case 5:cout<<(180-angle)/2<<" "<<(180-angle)/2<<endl;break;
            case 6:if(angle>=90){cout<<"-1"<<endl;}else{cout<<angle<<" "<<180-2*angle<<endl;}break;
            case 7:if(angle>=90){cout<<"-1"<<endl;}else{cout<<angle<<" "<<180-2*angle<<endl;}break;
            case 8:if(angle>=90){cout<<"-1"<<endl;}else{cout<<180-2*angle<<" "<<angle<<endl;}break;
            case 9:cout<<(180-angle)/2<<" "<<(180-angle)/2<<endl;break;
 
        }
    }
}
int main(){
   solve_LIKTRI();
}