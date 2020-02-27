#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll result=0;
ll squareInTriangle(ll b){
    b=b/2;
    result=(b*(b-1))/2;
    return result;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll b;
        cin>>b;
        cout<<squareInTriangle(b)<<endl;;
    }

}