/**

Name:- Mann Mehta
Codechef Id:- mann2108
**/

/** Problem Code:- CHDIGER **/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll findFact(ll start,ll n){
    ll fact=start;
    for(ll i=0;i<n;i++){
        fact*=10;
    }
    return fact;
}

int main(){

    ll t;
    cin>>t;

    vector<ll> vector2;
    while(t--){

        ll n,d;
        cin>>n>>d;

        ll temp=n;

        vector<ll> digits,digits2;

        ll arr[9]={};

        while(n!=0){
            if(n>d){
                digits.push_back(d);
                digits2.push_back(d);

            }
            else{
                digits.push_back(n);
                digits2.push_back(n);

            }
            arr[(n)-1]+=1;
            n/=10;
        }

        reverse(digits.begin(),digits.end());
        sort(digits2.begin(),digits2.end());

        ll ind1=0;
        ll ind2=0;

        vector<ll> sol;

        ll indx=0;

        while(true){

            if(arr[digits2[ind2]-1]<=0){
                ind2+=1;
                //cout<<":"<<ind1<<" "<<ind2<<endl;
                if(ind2==digits2.size()){
                    while(indx<digits.size()){
                        sol.push_back(digits[indx]);
                        indx++;
                    }
                    break;
                }
            }

            else if(digits2[ind2]==digits[ind1]){
                indx=ind1+1;
                //cout<<"::"<<ind1<<" "<<ind2<<endl;
                arr[digits[ind1]-1]-=1;
                sol.push_back(digits[ind1]);
                ind1+=1;
                ind2+=1;

                if(ind1==digits.size()){
                    while(indx<digits.size()){
                        sol.push_back(digits[indx]);
                        indx++;
                    }
                    break;
                }
            }
            else if(digits[ind1]>digits2[ind2]){
                    //cout<<"::"<<ind1<<" "<<ind2<<endl;
                arr[digits[ind1]-1]-=1;
                ind1+=1;
                if(ind1==digits.size()){
                    while(indx<digits.size()){
                        sol.push_back(digits[indx]);
                        indx++;
                    }
                    break;
                }
            }
            else{
                while(true);
            }

        }

        for(ll i=0;i<sol.size();i++){
            if(sol[i]>d){
                sol[i]=d;
            }
        }

        n=digits.size();
        ll exists=sol.size();
        ll required=n-exists;

        while(required--){
            sol.push_back(d);
        }

        ll cnt=0;
        n=sol.size()-1;

        for(ll i=0;i<sol.size();i++){
            cnt+=findFact(sol[i],n);
            n--;
        }

        cout<<(cnt)<<endl;

    }


}