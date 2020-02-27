#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
        ll a,b;
        cin>>a>>b;
        ll c=a-b;
        ll lastDigit;
        if(c!=1){
            lastDigit=1;
            c/=10;
            c=c*10+lastDigit;
        }
        else{
            lastDigit=2;
            c/=10;
            c=c*10+lastDigit;
        }
        cout<<c<<endl;
}