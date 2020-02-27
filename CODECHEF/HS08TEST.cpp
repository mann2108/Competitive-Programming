#include<bits/stdc++.h>
using namespace std;
int main(){
    float y;
    int x;
    cin>>x>>y;
    if(x>(y-0.50)){
        cout<<fixed<<setprecision(2)<<y;
    }
    else{
        if(x%5==0){
            y-=0.50+x;
            cout<<fixed<<setprecision(2)<<y;
        }
        else{
            cout<<fixed<<setprecision(2)<<y;
        }
    }

}