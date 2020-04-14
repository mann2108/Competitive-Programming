/// @author mann2108
/// Problem : REBIT (Ready Bitwise)

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pb push_back
#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const ll mod = 998244353;

ll binpow(ll a, ll b, ll m = mod) {
    a %= m;
    ll res = 1;
    while(b>0){
        if(b&1)res=(res*a)%m;
        a=(a*a)%m;
        b>>=1;
    }
    return res;
}

string convertInfixToPostfix(string s, ll n){
    string postfix = "";
    stack<char> operators;
    for(ll i=0;i<n;i++){
        if(s[i]=='#'){
            postfix+=s[i];
        }
        else if(s[i]==')'){
            while(true){
                char x = operators.top();
                operators.pop();
                if(x=='(')break;
                postfix+=x;
            }
        }
        else{
            operators.push(s[i]);
        }
    }
    return postfix;
}

int main(){
    FAST_IO
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll n = s.length();
        s = convertInfixToPostfix(s,n);
        stack<vector<ll> > operand;
        ll operands_count = 0;
        for(ll ind=0;ind<s.length();ind++){
            if(s[ind]=='#'){
                vector<ll> vec = {1,1,1,1};
                operand.push(vec);
                operands_count++;
            }
            else{
                vector<ll> o1(operand.top().begin(),operand.top().end());
                operand.pop();
                vector<ll> o2(operand.top().begin(),operand.top().end());
                operand.pop();
                vector<ll> chainRule;
                for(ll k=0;k<4;k++){
                    ll sum = 0;
                    for(ll i=0;i<4;i++){
                        for(ll j=0;j<4;j++){
                            if(s[ind]=='&'){
                                if((i&j)==k)sum = (sum + (o1[i]*o2[j])%mod)%mod;
                            }
                            if(s[ind]=='|'){
                                if((i|j)==k)sum = (sum + (o1[i]*o2[j])%mod)%mod;
                            }
                            if(s[ind]=='^'){
                                if((i^j)==k)sum = (sum + (o1[i]*o2[j])%mod)%mod;
                            }
                        }
                    }
                    chainRule.push_back(sum);
                }
                operand.push(chainRule);
            }
        }
        vector<ll> solution(operand.top().begin(),operand.top().end());
        ll Q = binpow(4,operands_count);
        ll QInv = binpow(Q,mod-2);
        ll zero = (solution[0]*QInv)%mod;
        ll a = (solution[1]*QInv)%mod;
        ll A = (solution[2]*QInv)%mod;
        ll one = (solution[3]*QInv)%mod;
        cout<<zero<<" "<<one<<" "<<a<<" "<<A<<endl;
    }
}


