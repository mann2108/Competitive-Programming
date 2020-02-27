/*

Name        :- Mann Mehta
Codechef Id :- mann2108

Problem Code:- MGAME

*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
/*
***** OBSERVATION *****

All POSSIBLE PERMUTATIONS IN GIVEN RANGE WITH REPETITION

WHERE  x IS n/2+1, which provide maximum 'M' when modulo with 'n'

therefore 'M' (maxm score) = n % (n/2+1)

Complexity:- based on Number of multiplications done

if(n%2==0):

 ans1:-
 x x-1 x-1 to x p p

 ans2:-
 2x-1 x x-1 to p x p

 ans3:-
 2x-1 2x-1 x to p p x

 print ans1 + ans2 + ans3

else
 ans1:-
 x x x to x p p

 ans2:-
 2x x x to p x p

 ans3:-
 2x 2x x to p p x

    print ans1 + ans2 + ans3

*/

int main(){
    ll t;
    cin>>t;

    while(t--){

        ll n,p;
        cin>>n>>p;
        ll x=n/2+1;

        if(n==1 || n==2){
            cout<<p*p*p<<endl;
        }
        else if(n%2==0){
            ll ans1=(1)*(p-(x-1)+1)*(p-(x-1)+1);
            ll ans2=(p-(2*x-1)+1)*(1)*(p-(x-1)+1);
            ll ans3=(p-(2*x-1)+1)*(p-(2*x-1)+1)*(1);
            cout<<ans1+ans2+ans3<<endl;
        }
        else{
            ll ans1=(1)*(p-x+1)*(p-x+1);
            ll ans2=(p-(2*x)+1)*(1)*(p-x+1);
            ll ans3=(p-(2*x)+1)*(p-(2*x)+1)*(1);
            cout<<ans1+ans2+ans3<<endl;
        }
    }
}