/*

Name:- Mann Mehta
Codechef ID:- mann2108

problem code:- FRGTNLNG

*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

inline bool sorted(const ll x,const ll y){return x>y;}

int main(){
    ll test;
    cin>>test;
    while(test--){
        ll n,k;
        cin>>n>>k;
        map<string,string> dict;
        string s[n];

        for(ll i=0;i<n;i++){
            cin>>s[i];
            dict[s[i]]="NO";
        }

        while(k--){
            ll t1;
            cin>>t1;
            while(t1--){
                string word;
                cin>>word;
                dict[word]="YES";
            }
        }
        ll u=0;
        for(ll i = 0; i<n; ++i) {
           cout<<dict[s[i]]<<" ";
        }
        cout<<endl;
        dict.clear();

    }

}

