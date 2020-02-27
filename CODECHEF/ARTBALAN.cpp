/**
Name:- Mann Mehta
Code-Chef Id:- mann2108
**/

/** Problem Code:- ARTBALAN **/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){

    ll t;
    cin>>t;
    while(t--){

        string s;
        cin>>s;
        ll n=s.length();

        sort(s.begin(),s.end());

        ll cnt=1;
        vector<ll> vec;
        bool finish=false;

        if(s.length()>=2){
            for(ll i=1;i<n;i++){
                if(s[i]==s[i-1]){
                    cnt++;
                    finish=false;
                }
                else{
                    vec.push_back(cnt);
                    cnt=1;
                    finish=true;
                }
            }
        }

        ll ok_or_not=true;

        if(finish || cnt>=2){
            vec.push_back(cnt);
        }

        ll cpp;

        if(n>=2){
            cpp=vec[0];
            for(ll i=0;i<vec.size();i++){
                if(vec[i]!=cpp){
                    ok_or_not=false;
                    break;
                }
            }
        }

        vector<ll> operations;

        if(ok_or_not || s.length()<=1){
            cout<<"0"<<endl;
        }
        else{

            sort(vec.begin(),vec.end());

            /** 1 times n **/
            cnt=0;
            for(ll i=0;i<=vec.size()-2;i++){
                cnt+=vec[i];
            }
            operations.push_back(cnt);

            /** n times 1 **/
            cnt=0;
            if(n<=26){
                for(ll i=vec.size()-1;i>=0;i--){
                    cnt+=vec[i]-1;
                }
                operations.push_back(cnt);
            }

            cnt=0;

            vector<ll> dup;
            for(ll i=0;i<vec.size();i++){
                dup.push_back(vec[i]);
            }

            for(ll i=2;i<=(ll)sqrt(n);i++){

                if(n%i==0 && n/i<=26){
                    ll fact1=i;
                    ll fact2=n/i;

                    vector<ll> vec;

                    for(ll j=0;j<dup.size();j++){
                        vec.push_back(dup[j]);
                    }

                    ll backUp=0;
                    ll ind=vec.size()-1;

                    for(ll j=vec.size()-1;j>=0;j--){
                        if(vec[j]>=fact1){
                            backUp+=(vec[j]-fact1);
                            ind=j;
                        }
                        else{
                            ind=j;
                            break;
                        }
                    }

                    if(ind==vec.size()-1){

                        ll front=0;
                        ll back=ind;

                        bool flag=true;

                        ll op=0;
                        ll x=0;

                        while(front<=back){
                            if(flag){
                                x+=vec[back];
                                flag=false;
                            }
                            else{
                                if(x>=fact1){
                                    back--;
                                    flag=true;
                                    x=x-fact1;
                                }
                                else{
                                    x+=vec[front];
                                    op+=vec[front];
                                    front++;
                                }
                            }
                        }
                        operations.push_back(op);
                    }
                    else if(ind==0){
                        operations.push_back(backUp);
                    }
                    else{

                        ll ind2=ind;
                        ll temp_backUp=backUp;

                        for(ll j=ind;j>=0;j--){

                            if(vec[j]+backUp==fact1){
                                backUp=0;
                                ind2=j-1;
                                break;
                            }
                            else if(vec[j]+backUp<fact1){
                                vec[j]+=backUp;
                                backUp=0;
                                ind2=j;
                                break;
                            }
                            else{
                                backUp-=(fact1-vec[j]);
                                ind2=j-1;
                            }

                        }

                        if(ind2<=0){
                            operations.push_back(temp_backUp);
                        }
                        else{
                            ll op=temp_backUp;

                            ll front=0;
                            ll back=ind2;

                            ll x=0;

                            bool flag=true;

                            while(front<back){

                                if(flag){
                                    x+=vec[back];
                                    flag=false;
                                }
                                else{
                                    if(x==fact1){
                                        back--;
                                        x=0;
                                        flag=true;
                                    }
                                    else if(x>fact1){
                                        back--;
                                        flag=true;
                                        x=x-fact1;
                                    }
                                    else{
                                        x+=vec[front];
                                        op+=vec[front];
                                        front++;
                                    }
                                }
                            }
                            operations.push_back(op);
                        }
                    }
                }
                if(n%(n/i)==0 && i<=26){

                    ll fact1=n/i;
                    ll fact2=i;

                    vector<ll> vec;
                    for(ll j=0;j<dup.size();j++){
                        vec.push_back(dup[j]);
                    }

                    ll backUp=0;
                    ll ind=vec.size()-1;

                    for(ll j=vec.size()-1;j>=0;j--){
                        if(vec[j]>=fact1){
                            backUp+=(vec[j]-fact1);
                            ind=j;
                        }
                        else{
                            ind=j;
                            break;
                        }
                    }

                    if(ind==vec.size()-1){

                        ll front=0;
                        ll back=ind;

                        bool flag=true;

                        ll op=0;
                        ll x=0;

                        while(front<=back){
                            if(flag){
                                x+=vec[back];
                                flag=false;
                            }
                            else{
                                if(x>=fact1){
                                    back--;
                                    flag=true;
                                    x=x-fact1;
                                }
                                else{
                                    x+=vec[front];
                                    op+=vec[front];
                                    front++;
                                }
                            }
                        }
                        operations.push_back(op);
                    }
                    else if(ind==0){
                        operations.push_back(backUp);
                    }
                    else{

                        ll ind2=ind;
                        ll temp_backUp=backUp;

                        for(ll j=ind;j>=0;j--){

                            if(vec[j]+backUp==fact1){
                                backUp=0;
                                ind2=j-1;
                                break;
                            }
                            else if(vec[j]+backUp<fact1){
                                vec[j]+=backUp;
                                backUp=0;
                                ind2=j;
                                break;
                            }
                            else{
                                backUp-=(fact1-vec[j]);
                                ind2=j-1;
                            }

                        }


                        if(ind2<=0){
                            operations.push_back(temp_backUp);
                        }
                        else{
                            ll op=temp_backUp;

                            ll front=0;
                            ll back=ind2;

                            ll x=0;

                            bool flag=true;

                            while(front<back){

                                if(flag){
                                    x+=vec[back];
                                    flag=false;
                                }
                                else{
                                    if(x==fact1){
                                        back--;
                                        x=0;
                                        flag=true;
                                    }
                                    else if(x>fact1){
                                        back--;
                                        flag=true;
                                        x=x-fact1;
                                    }
                                    else{
                                        x+=vec[front];
                                        op+=vec[front];
                                        front++;
                                    }
                                }
                            }
                            operations.push_back(op);
                        }
                    }

                }
                else{
                    continue;
                }
            }
        ll ans= operations[0];
        for(ll k=0;k<operations.size();k++){
            if(ans>=operations[k]){
                ans=operations[k];
            }
        }
        cout<<ans<<endl;
        }
    }
}