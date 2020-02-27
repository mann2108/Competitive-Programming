/*

Codechef Id  :- mann2108
Name         :- Mann Mehta

Problem Code :- INTXOR

*/

#include<bits/stdc++.h>
/*
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstdio>
*/
using namespace std;
typedef long long int ll;
typedef long double ld;

#define st set;
#define ls list;
#define mp map;


bool sorted(const int x,const int y){return x>y;}
bool randomize(){};

int main(){
    ll test;
    cin>>test;
    while(test--){
        //ll b[14]={2,5,7,8,3,1,10,12,14,56,34,11,15,23};
        ll b[15]={109,122,3,1,10,12,14,56,34,11,15,23,47,344,97};
        ll n;
        cin>>n;

        ll a[n]={0};

        if(n%2==0){

            ll temp1,temp2;

            cout<<"1 1 2 3"<<endl;
            //cout<<(b[0]^b[1]^b[2])<<endl;;
            cin>>temp1;
            cout<<"1 1 2 4"<<endl;
            //cout<<(b[0]^b[1]^b[3])<<endl;;
            cin>>temp2;

            ll for_3;
            ll for_4;

            bool flag=true;


            for(ll i=3;i<=n-3;i+=2){
                cout<<"1 "<<i<<" "<<i+1<<" "<<i+2<<endl;
                //cout<<(b[i-1]^b[(i+1)-1]^b[(i+2)-1])<<endl;;
                ll x1;
                cin>>x1;
                cout<<"1 "<<i<<" "<<i+1<<" "<<i+3<<endl;
                //cout<<(b[i-1]^b[(i+1)-1]^b[(i+3)-1])<<endl;;
                ll x2;
                cin>>x2;


                ll ans1=temp1^x1;
                ll ans2=temp1^x2;

                if(flag){
                    for_3=x1^temp2;
                    for_4=x2^temp1;
                    flag=false;;
                }

                a[(i+2)-1]=ans1^temp2;
                a[(i+3)-1]=ans2^temp2;

                temp1=x1;
                temp2=x2;
            }

            ll ans3=a[n-1]^a[n-2];
            cout<<"1 1 "<<n-1<<" "<<n<<endl;
            //cout<<(b[0]^b[n-2]^b[n-1])<<endl;
            ll t1;
            cin>>t1;
            cout<<"1 2 "<<n-1<<" "<<n<<endl;
            //cout<<(b[1]^b[n-2]^b[n-1])<<endl;
            ll t2;
            cin>>t2;
            a[0]=t1^ans3;
            a[1]=t2^ans3;

            a[2]=for_3^a[0]^a[1]^a[4];
            a[3]=for_4^a[0]^a[1]^a[5];

        }
        else{
            ll temp1,temp2;

            cout<<"1 1 2 3"<<endl;
            //cout<<(b[0]^b[1]^b[2])<<endl;;
            cin>>temp1;
            ll temp3=temp1;
            cout<<"1 1 2 4"<<endl;
            //cout<<(b[0]^b[1]^b[3])<<endl;;
            cin>>temp2;
            ll temp4=temp2;

            ll for_3;
            ll for_4;

            bool flag=true;


            for(ll i=3;i<=n-4;i+=2){

                cout<<"1 "<<i<<" "<<i+1<<" "<<i+2<<endl;
                //cout<<(b[i-1]^b[(i+1)-1]^b[(i+2)-1])<<endl;;
                ll x1;
                cin>>x1;
                cout<<"1 "<<i<<" "<<i+1<<" "<<i+3<<endl;
               // cout<<(b[i-1]^b[(i+1)-1]^b[(i+3)-1])<<endl;;
                ll x2;
                cin>>x2;

                ll ans1=temp1^x1;
                ll ans2=temp1^x2;

                if(flag){
                    for_3=ans1;
                    flag=false;;
                }

                a[(i+2)-1]=ans1^temp2;
                a[(i+3)-1]=ans2^temp2;

                temp1=x1;
                temp2=x2;
            }
            cout<<"1 "<<n-2<<" "<<n-1<<" "<<n<<endl;
            //cout<<(b[n-3]^b[n-2]^b[n-1])<<endl;
            ll for_n;
            cin>>for_n;
            a[n-1]=for_n^a[n-2]^a[n-3];
            ll ans3=a[n-1]^a[n-2];
            cout<<"1 1 "<<n-1<<" "<<n<<endl;
            //cout<<(b[0]^b[n-2]^b[n-1])<<endl;
            ll t1;
            cin>>t1;
            cout<<"1 2 "<<n-2<<" "<<n<<endl;
            //cout<<(b[1]^b[n-3]^b[n-1])<<endl;
            ll t2;
            cin>>t2;

            a[0]=t1^a[n-2]^a[n-1];
            a[1]=t2^a[n-3]^a[n-1];

            a[2]=temp3^a[0]^a[1];
            a[3]=temp4^a[0]^a[1];



        }

        cout<<"2 ";
        for(ll i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        ll finish;
        cin>>finish;
        if(finish==1){

        }
        else{
            cout<<1/0;
        }
    }
}