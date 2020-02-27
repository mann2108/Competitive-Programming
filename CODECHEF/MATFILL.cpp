/**
CodeChef Id:- mann2108
Chapter Name:- IllUMINATI (CHARUSAT)
**/
 
#include<bits/stdc++.h>
 
typedef  int ll;
typedef long double ld;
 
using namespace std;
 
/** Fill the matrix safely **/
 
bool isPrime(ll number){
    bool flag=true;
    if(number==2 || number==3){
        flag=true;
    }
    else if(number>3){
        for(ll i=2;i<=sqrt(number);i++){
            if(number%i==0){
                flag=false;
                break;
            }
        }
    }
    else{
        flag=false;
    }
 
    return flag;
}
 
void solve_FillMatrixSafely(){
    ll test_cases;
    cin>>test_cases;
 
 
    while(test_cases--){
        ll n,k;
        cin>>n>>k;
        if(isPrime(n)){
            if(k<0){
                while(true);
            }
            else if(k==0){
                cout<<2*n-1<<endl;;
            }
            else if(k<=(n-1)){
                cout<<(n-1)<<endl;
            }
            else{
                cout<<"0"<<endl;
            }
        }
        else{
            cout<<"-1"<<endl;
        }
    }
}
int main(){
 solve_FillMatrixSafely();
} 