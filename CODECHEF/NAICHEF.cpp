#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
long int t,x,y,n;
cin>>t;
while(t!=0){
    cin>>n>>x>>y;
    int cnt1=0,cnt2=0;
    long int a[n];
    for(long int i=0;i<n;i++){
        cin>>a[i];
        if(x==a[i]){
            cnt1++;
        }
        if(y==a[i]){
            cnt2++;
        }
    }
    float f=((cnt1*cnt2)/(float)(n*n));





    /*

    int cnt=0;
    for(long int i=0;i<n;i++){
        for(long int j=0;j<n;j++){
            if((a[i]==x)&&(a[j]==y))
            {
                 cnt++;
                 break;
                                                                                                                                                                                                                                                                                                                                                                                                                                                       }
         }
    }
    float f;
    f=((float)cnt/(n*n));*/
    printf("%0.10f \n",f);
  t--;
}
}