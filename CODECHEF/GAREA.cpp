/**
ILLUMINATI SEASON 3 ROUND 2
GAREA
CODECHEF STUDENT CHAPTER CHARUSAT
*/
 
#include<bits/stdc++.h>
#define pi (3.141592)
 
using namespace std;
typedef long long int ll;
 
int main(){
    ll t;
    cin>>t;
    while(t--){
    
        double dist1,dist2,rad1,rad2;
 
        cout<<"1 0 0"<<endl;
        cin>>dist1>>rad1;
        
        cout<<"1 10000 10000"<<endl;
        cin>>dist2>>rad2;
 
        rad2=rad2-M_PI;
 
        double x0,y0,x1,y1;
 
        x0=cos(rad1)*(dist1);
        y0=sin(rad1)*(dist1);
 
        x1=cos(rad2)*(dist2);
        y1=sin(rad2)*(dist2);
 
        x1=10000-x1;
        y1=10000-y1;
 
        cout<<"2 "<<(y1-y0)*(x1-x0)<<endl;
    }
}