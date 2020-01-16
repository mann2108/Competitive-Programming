#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,n;
    cin>>t;
    while(t!=0){
        cin>>n;
        long long int a[n],cnt_odd=0,cnt_even=0;
        for(long long int i=0;i<n;i++){
                cin>>a[i];
                if(a[i]%2==0){
                    cnt_even++;
                }
                else{
                    cnt_odd++;
                }

        }
        if(cnt_odd>=cnt_even)
            cout<<"Petr"<<endl;
        else
            cout<<"tourist"<<endl;


    t--;
    }
}

