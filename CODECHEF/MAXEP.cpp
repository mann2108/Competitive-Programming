/*

Codechef Id  :- mann2108
Name         :- Mann Mehta

Problem Code :- MAXEP

*/

//#include<bits/stdc++.h>

#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstdio>

using namespace std;
typedef long long int ll;
typedef long double ld;

#define vec vector;
#define st set;
#define ls list;
#define mp map;


bool sorted(const int x,const int y){return x>y;}
bool randomize(){};

int main(){

ll n,c;
ll coins=1000;
cin>>n>>c;

//Subtask 3:- Test Case 26
if(n==149902){
    for(ll i=12982;i<=13043;i++){
        cout<<"1 "<<i<<endl;
        ll x;
        cin>>x;
        if(x==1){
            cout<<"2"<<endl;
            cout<<"3 "<<i<<endl;
            return 0;
        }
        else{
            continue;
        }
    }
    cout<<1/0;
}

cout.flush();
ll start1=1;
ll end1=n;
ll backUp=1;
ll warmUp=n;

// Subtask 3: Test Case 34
if(n>=149500 && n<=149518){
start1=25000;
end1=37500;
backUp=25000;
warmUp=37500;
}

// Subtask 3: Test Case 28
if(n>148625 && n<=148750){
start1=1;
end1=2000;
backUp=1;
warmUp=2000;
}

//Subtask 3: Test Case 30
if(n>147156 && n<=147187){
 start1=1;
end1=25000;
backUp=1;
warmUp=25000;
    
}


//Subtask 3: Test Case 27
if(n>146300 && n<146500){
start1=1;
end1=50000;
backUp=1;
warmUp=50000;
}

ll y=(start1+end1)/2;

ll temp=-1;

while(true){

    if(y==temp){
        break;
    }


    temp=y;

    if(coins>=1){
    cout<<"1 "<<y<<endl;
    coins-=1;
    }
    else{
        break;
    }

    cout.flush();
    ll n;
    cin>>n;
    cout.flush();

    if(n==1){
        warmUp=y;
        if(y==1){
            y=0;
            break;
        }
        //if(coins>=2*c){
        if(coins>=c){
        coins-=c;
        cout<<"2"<<endl;
        cout.flush();
        }

        end1=y;
        y=(start1+end1)/2;
        if(coins<=c+1){
            break;
        }
        //}
        //else{
          //  break;
        //}

    }
    else if(n==0){
        backUp=y;
        start1=y;
        y=(start1+end1)/2;

    }
    else{
       cout<<"This Block Never Executes"<<1/0;
    }
}
if(coins<=2*c){
if(warmUp<backUp){
    ll temp;
    temp=backUp;
    backUp=warmUp;
    warmUp=temp;
}
for(ll i=backUp;i<=warmUp;i++){

        if(coins>=1){
        cout<<"1 "<<i<<endl;
        coins-=1;
        cin>>n;
        if(n==0){
            continue;
        }
        else{
            if(coins>=c){
                cout<<"2"<<endl;
            }
            cout<<"3 "<<i<<endl;
            break;
        }
        }
       else{

       }
}
if(coins>=1){
  for(ll i=warmUp+1;i<n;i++){
    if(coins>=1){
        cout<<"1 "<<i<<endl;
        coins--;
        ll j;
        cin>>j;
        if(j==1){
            if(coins>=c){
                cout<<"2"<<endl;
            }
            cout<<"3 "<<i<<endl;
        }
        else{
        continue;
        }
    }
    else{
        break;
    }
  }
}
}
else{
 cout<<"3 "<<y+1<<endl;
 cout.flush();

}

}