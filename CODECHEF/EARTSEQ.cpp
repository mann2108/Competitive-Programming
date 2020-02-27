/*
Name        :-Mann Mehta
CodeChef ID :- mann2108

Problem Code:-EARTSEQ
*/

#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
/*
>In this Problem -1 never occurs.

>In worst case for my code maximum element is:-
 A(max)=50000th prime * 17

>We have to multiply every prime with prime counter.

>Complexity O(50000*sqrt(50000))


*/
//Primes ARRAY
ll primes[50001]={};

int main(){
        // Before any input an array of 50001 primes starting with 19.
        ll count=0;
        ll x=19;
        while(true){
            bool flag =true;
            for(ll i=2;i<=sqrt(x);i++){
                if(x%i==0){
                    flag=false;
                    break;
                }
            }
            if(flag){
                primes[count]=x;
                count++;
                if(count==50001){
                    break;
                }
            }

            x+=1;
        }


        /*for(ll i=0;i<=500;i++){
            cout<<primes[i]<<" ";
        }
        cout<<endl;
        */

        ll test_cases;

        cin>>test_cases;

        while(test_cases--){

            ll n;
            cin>>n;
            if(n<=4){
                if(n==3){
                    cout<<"6 15 10"<<endl;
                }
                else{
                    cout<<"6 15 35 14"<<endl;
                }
            }
            else{

                // A counter which multiply every prime with same value periodically
                //a[0] denotes 7
                //a[1] denotes 11
                //a[2] denotes 13
                //a[3] denotes 17

                bool a[4]={true,true,true,true};

                ll cnt=3;

                cout<<"6 15 35 ";
                ll ind=0;
                ll something=primes[ind];
                if(cnt+1==n){
                    cout<<"14"<<endl;
                }
                else if(cnt+2==n){
                    cout<<7*something<<" ";
                    cout<<something*2<<endl;
                }
                else{
                    while(true){
                            if(a[0]){
                            cout<<7*something<<" ";
                            cout<<something*11<<" ";
                            cnt+=2;

                            if(cnt+1==n){
                                cout<<(11*2)<<endl;
                                break;
                            }

                            else if(cnt+2==n){
                                cout<<11*primes[ind+1]<<" ";
                                cout<<primes[ind+1]*2<<endl;
                                break;
                            }

                            else{
                                ind++;
                                a[0]=false;
                                a[1]=true;
                                something=primes[ind];
                            }
                        }
                        else if(a[1]){
                            cout<<11*something<<" ";
                            cout<<something*13<<" ";
                            cnt+=2;
                            if(cnt+1==n){
                                cout<<13*2<<endl;
                                break;
                            }
                            else if(cnt+2==n){
                                cout<<13*primes[ind+1]<<" ";
                                cout<<primes[ind+1]*2<<endl;
                                break;
                            }
                            else{
                                ind++;
                                a[1]=false;
                                a[2]=true;
                                something=primes[ind];
                            }
                        }
                        else if(a[2]){
                            cout<<13*something<<" ";
                            cout<<something*17<<" ";
                            cnt+=2;
                            if(cnt+1==n){
                                cout<<17*2<<endl;
                                break;
                            }
                            else if(cnt+2==n){
                                cout<<17*primes[ind+1]<<" ";
                                cout<<primes[ind+1]*2<<endl;
                                break;
                            }
                            else{
                                ind++;
                                a[2]=false;
                                a[3]=true;
                                something=primes[ind];
                            }
                        }

                        //For a[3]

                        else{
                            cout<<17*something<<" ";
                            cout<<something*7<<" ";
                            cnt+=2;
                            if(cnt+1==n){
                                cout<<7*2<<endl;
                                break;
                            }
                            else if(cnt+2==n){
                                cout<<7*primes[ind+1]<<" ";
                                cout<<primes[ind+1]*2<<endl;
                                break;
                            }
                            else{
                                ind++;
                                a[3]=false;
                                a[0]=true;
                                something=primes[ind];
                            }
                        }
                    }
                }
            }
        }
}