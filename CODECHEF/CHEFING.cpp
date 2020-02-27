/*
Name:- Mann Mehta
Id:- mann2108
*/

/* Problem Code:- CHEFING */
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t;
    cin>>t;

    while(t--){
        vector<string> vec;
        ll n;
        cin>>n;
        ll max=INT_MAX;
        string s3="";
        ll ind=0;
        ll i=0;
        while(n--){
            string s;
            cin>>s;
            ll len=s.length();
            if(len<=max){
                s3=s;
                ind=i;
                max=len;
            }
            i++;
            vec.push_back(s);
        }

        for(ll i=0;i<s3.length();i++){
            bool flag1=true;

            for(ll j=0;j<vec.size();j++){
                bool flag2=false;

                if(j==ind){
                    continue;
                }
                else{
                    for(ll k=0;k<vec[j].length();k++){
                        if(vec[j][k]==s3[i]){
                            flag2=true;
                            break;
                        }
                    }
                }
                if(!flag2){
                    flag1=false;
                    break;
                }
            }
            if(!flag1){
                s3[i]='#';
            }
        }
        set<char> set1;
        set<char> :: iterator it;
        for(ll i=0;i<s3.length();i++){
            set1.insert(s3[i]);
        }
        s3="";
        for(it=set1.begin();it!=set1.end();it++){
            s3 += *(it);
        }
        //cout<<s3<<endl;
        ll ans=0;

        for(ll i=0;i<s3.length();i++){
            if(s3[i]!='#'){
                ans++;
            }
        }
        cout<<ans<<endl;

    }
}