/// @author mann2108
/// Problem : SPOJ STPAR

#include<bits/stdc++.h>
//#include<array>
//#include<algorithm>
using namespace std;
typedef long long int ll;

bool sorted(const ll x,const ll y){return x>y;}

int main(){

    while(true){

        ll n;

        cin>>n;

        if(n==0){
            break;
        }

        ll a[n];

        stack<ll> st1;
        st1.push(-1);

        stack<ll> st2;
        st2.push(-1);

        stack<ll> st3;
        st3.push(-1);

        for(ll i=0;i<n;i++){
            cin>>a[i];
        }

        /*Pushing the elements into stack-1*/
        for(ll i=n-1;i>=0;i--){
            st1.push(a[i]);
        }

        bool flag=true;

        /*Sequential Counter as ordering in increasing*/
        ll cnt=1;

        while(true){

            if(st1.top()==cnt){
                st2.push(st1.top());
                st1.pop();
                cnt++;
                if(st1.top()==-1){
                    break;
                }
            }

            else if(st3.top()==cnt){
                st2.push(st3.top());
                st3.pop();
                cnt++;
            }

            else{
                st3.push(st1.top());
                st1.pop();
                if(st1.top()==-1){
                    break;
                }
            }

        }

        while(st3.top()!=-1){
            st2.push(st3.top());
            st3.pop();
        }

        ll ind=0;

        while(st2.top()!=-1){
            a[ind]=st2.top();
            st2.pop();
            ind++;
        }

        cnt=1;

        for(ll i=n-1;i>=0;i--){
            if(a[i]!=cnt){
                flag=false;
            }
            else{
                cnt++;
            }
        }

       reverse(a,a+n);

       bool flag1=true;

       for(ll i=0;i<n;i++){
        if(a[i]!=i+1){
            flag1=false;
            break;
        }
       }

       if(flag1){
        cout<<"yes"<<endl;
       }
       else{
        cout<<"no"<<endl;
       }
    }
}
