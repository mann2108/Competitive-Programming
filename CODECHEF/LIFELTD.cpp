/*
Name:- Mann Mehta
Codechef Id:- mann2108

problem code:- LIFELTD
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
ll t;
cin>>t;
while(t--){
    bool flag=false;
    string s[3];
    for(ll i=0;i<3;i++){
        cin>>s[i];
    }
    for(ll i=0;i<2;i++){
        for(ll j=0;j<2;j++){
            if(s[i][j]=='l' || s[i][j]=='L'){
                if(s[i+1][j]=='l' || s[i+1][j]=='L'){
                    if(s[i+1][j+1]=='l' || s[i+1][j+1]=='L'){
                        flag=true;
                        break;
                    }
                }
            }
        }
    }
    if(flag){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}

}
