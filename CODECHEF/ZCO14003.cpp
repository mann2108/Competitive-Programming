/// @author mann2108
/// Problem : ZCO14003

#include<iostream>
#include<algorithm>
using namespace std;
typedef unsigned long long int ull;

int main(){
    ull n;

    cin>>n;
    ull a[n];
    ull w;
    for(ull i=0;i<n;i++){
        cin>>a[i];
    }
    ull final_price=0;
    ull cnt=0;
    ull price=0;


    sort(a,a+n);

    for(ull i=0;i<n;i++){
        a[i]=a[i]*(n-i);
    }

    cout<<(*(max_element(a,a+n)));
}

