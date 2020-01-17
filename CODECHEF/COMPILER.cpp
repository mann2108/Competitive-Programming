/*

Name:- Mann Mehta
Codechef Id:- mann2108
problem Code:- COMPILER

*/

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){

ll t;
cin>>t;

while(t--){

    string s;
    cin>>s;

    stack<char> stk;

    stk.push('1');
    ll ans=0;
    ll cnt=0;

    bool flag=false;
    ll previous=0;
    for(ll i=0;i<s.length();i++){

        if(s[i]=='<'){
                stk.push('<');
                cnt++;

        }

        else{

            if(stk.top()=='1'){
                cnt=0;
                break;

            }
            else{
                stk.pop();
                 cnt++;
                 if(stk.top()=='1'){
                    if(cnt>=ans){
                        ans=cnt;
                    }
                 }
            }
        }

    }
    cout<<ans<<endl;
}
}
