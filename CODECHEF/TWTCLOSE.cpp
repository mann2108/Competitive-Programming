#include<bits/stdc++.h>
using namespace std;

int main(){
long long int  a,b;
cin>>a>>b;

long long int  arr[a];
for(long long int  i=0;i<a;i++){
    arr[i]=0;
}

long long int  cnt=0;

while(b!=0){

    string s1;
    long long int q=0;

    cin>>s1;

    if(s1[2]=='O'){
        for(long long int i=0;i<a;i++)
            arr[i]=0;
        cnt=0;
    }

    else{

        cin>>q;
        q=q-1;

        if(arr[q]==1){
            cnt--;
            arr[q]=0;

        }

        else{
            cnt++;
            arr[q]=1;


        }
    }

    cout<<cnt<<endl;
b--;
}





}
