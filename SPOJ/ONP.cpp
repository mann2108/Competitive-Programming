/// @author mann2108
/// Problem : SPOJ ONP

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll t;
    cin>>t;
    while(t--){

        string s;
        cin>>s;

        stack< char > opp;

        stack< char > sol;

        for(ll i=0;i<s.length();i++){

                if(s[i]=='('){
                    opp.push('(');
                }
                else if(s[i]==')'){
                    while(true){
                        sol.push(opp.top());
                        opp.pop();
                        if(opp.top()=='('){
                                opp.pop();
                                break;
                        }
                    }
                }
                else if(s[i]=='+' || s[i]=='-'){
                    if(opp.top()=='('){
                        opp.push(s[i]);
                    }
                    else{
                        while(true){
                            sol.push(opp.top());
                            opp.pop();
                            if(opp.top()=='('){
                                    break;
                            }
                        }
                    }
                }
                else if(s[i]=='*' || s[i]=='/' || s[i]=='^'){
                    if(opp.top()=='('){
                        opp.push(s[i]);
                    }
                    else if(opp.top()=='+' || opp.top()=='-'){
                        opp.push(s[i]);
                    }
                    else{
                        while(true){
                            sol.push(opp.top());
                            opp.pop();
                            if(opp.top()=='(' || opp.top()=='+' || opp.top()=='-'){
                                    break;
                            }
                        }
                    }
                }
                else{
                    sol.push(s[i]);
                }
        }

        stack <char> sol2;

        while(true){
            sol2.push(sol.top());
            sol.pop();
            if(sol.size()==0){
                break;
            }
        }

        while(true){
            cout<<sol2.top();
            sol2.pop();
            if(sol2.size()==0){
                break;
            }
        }

        cout<<endl;

    }
}
