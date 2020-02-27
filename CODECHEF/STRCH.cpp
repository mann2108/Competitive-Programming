#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll t;
    cin>>t;

    while(t--){

        string s;
        char x;
        ll len;
        cin>>len;
        cin>>s>>x;

        ll subCnt=0,beforeC=0;

        for(ll i=0;i<len;i++){
            beforeC++;
            if(s[i]==x){
                subCnt+=(beforeC-1)*(len-i);
                subCnt+=(len-i);
                beforeC=0;
            }
        }

        cout<<subCnt<<endl;

    }
}