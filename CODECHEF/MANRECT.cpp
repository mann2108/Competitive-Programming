/**
Name:- Mann Mehta
Code-Chef Id:- mann2108 
**/

/** Problem Code:- MANRECT **/

#include<bits/stdc++.h>
#include<cstdio>

using namespace std;
typedef long long int ll;
typedef long double ld;

ll c=1000000000;

int main(){
        ll test_cases;
        cin>>test_cases;

        /**
        Input By Grader as Query given for respective (x,y)

        (0,0)-LB:- Left Bottom
        (c,0)-RB:- Right Bottom
        (0,c)-LT:- Left Top
        (c,c)-RT:- Right Top

        where c is 10e009

        Relation among 2 corners (p1,q1) and (p2,q2)

        q2=(ll)y3-A1;
        p1=q2-c+LT;
        q1=LB-p1;
        p2=(c+q1-RB);

        **/

        while(test_cases--){

            /** Query-1 **/
            cout<<"Q 0 0"<<endl;
            fflush(stdout);
            ld LB;
            cin>>LB;

            /** Query-2 **/
            cout<<"Q "<<c<<" 0"<<endl;
            fflush(stdout);
            ld RB;
            cin>>RB;

            /** Query-3 **/
            cout<<"Q 0 "<<c<<endl;
            fflush(stdout);
            ld LT;
            cin>>LT;

            /** Query-4 **/
            cout<<"Q "<<c<<" "<<c<<endl;
            fflush(stdout);
            ld RT;
            cin>>RT;

            ll Xl,Yl,Xu,Yu;

            ll mid_x1x2=(LB-RB+c)/2;

            /** Query-5 **/
            cout<<"Q "<<mid_x1x2<<" 0"<<endl;
            cin>>Yl;

            Xl=LB-Yl;
            Xu=(c+Yl-RB);
            Yu=Xl+c-LT;

            /** Solution (xl,yl) and (xu,yu) **/
            cout<<"A "<<Xl<<" "<<Yl<<" "<<Xu<<" "<<Yu<<endl;

            ll Input_Grader;
            cin>>Input_Grader;
        }
}