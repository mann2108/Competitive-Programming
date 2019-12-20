/// @author mann2108
/// Problem : ZCO14001
#include<iostream>
using namespace std;

int main(){

    long long int w;
    long long int h;
    long long int a[1000000];
    cin>>w>>h;

    for(long long int i=0;i<w;i++){
        cin>>a[i];
        if(a[i]>h){
            a[i]=0;
        }
    }

    long long int n;
    long long int cnt=0;
    long long int picked=0;

    do{
            cin>>n;
            switch(n){

            case 1:if(cnt!=0){
                   cnt--;
                   }
                   break;

            case 2:if(cnt!=(w-1)){
                   cnt++;
                   }
                   break;

            case 3:if(picked!=1){
                     if(a[cnt]>0){
                      a[cnt]=a[cnt]-1;
                      picked=1;
                      }
                    }
                   break;

            case 4:if(picked!=0){
                     if(a[cnt]<h){
                     a[cnt]=a[cnt]+1;
                     picked=0;
                     }
                   }
                   break;

            case 0:break;

            }

    }while(n!=0);

    for(long long int i=0;i<w;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}

