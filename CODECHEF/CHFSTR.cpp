/** CodeChef Id:- mann2108 **/
/** Chapter Name:- ILLUMINATI **/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool sorted(pair<ll,ll> p1,pair<ll,ll> p2){
    return(p1.first<p2.first);
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll len=s.length();
        ll cnt=1;
        vector<ll> vec1,vec2;
        bool flag=false;
        for(ll i=0;i<=len-1;i++){
            if(s[i]==s[i+1]){
                cnt++;
                flag=true;
            }
            else{
                vec1.push_back(cnt);
                vec2.push_back(cnt);
                cnt=1;
                flag=false;
            }
        }
 
        if(cnt!=1 && flag){
            vec1.push_back(cnt);
            vec2.push_back(cnt);
        }
        sort(vec1.begin(),vec1.end());
 
        ll cost=0;
        for(ll i=0;i<vec1.size();i++){
            cost+=abs(vec1[i]-vec2[i]);
        }
 
        cout<<(cost/2)<<endl;
 
 
    }
 
}