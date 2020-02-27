/**
ILLUMINATI SEASON 3 ROUND 2
RMDIR
CODECHEF STUDENT CHAPTER CHARUSAT
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void printx(ll x){
    cout<<x<<" ";
}
int main(){
    ll t;
    cin>>t;
    while(t--){
 
        ll n;
 
        cin>>n;
 
        multiset<ll> pq;
 
        ll x;
 
        for(ll i=0;i<n;i++){
            cin>>x;
            pq.insert(x);
        }
 
        /*for_each(pq.begin(),pq.end(),printx);
        cout<<endl;*/
        ll sum=0;
 
        while(pq.size()>1){
        
            auto n1=(pq.begin());
            pq.erase(n1);
            
            auto n2=(pq.begin());
            pq.erase(n2);
            
            sum+=((*n1)+(*n2));
            
            pq.insert((*n1)+(*n2));
        }
 
        cout<<sum<<endl;
 
    }
} 