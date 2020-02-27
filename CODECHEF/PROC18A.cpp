/* HEADER DECLARATION BLOCK */

#include<bits/stdc++.h>
#include<cstdio>


using namespace std;

/* CONSTANT DECALRATION BLOCK */
#define mod 10000007

/* ALIAS CREATION BLOCK */

typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;


/* START OF MAIN */
int main(){


ll test_cases;
cin>>test_cases;


while(test_cases--){
ll a,b;
cin>>a>>b;
int arr[a];
for(int i=0;i<a;i++){
    cin>>arr[i];
}
int s1=0,s2=0;
for(int i=0;i<a-1;i++){
        s1=arr[i];
    for(int j=i+1;j<b+i;j++){
            if(j>=a){
                break;
            }
        s1=s1+arr[j];
        //cout<<s1<<" ";

    }
    if(s1>=s2){
        s2=s1;
        s1=0;
    }
}
if(b==1){
    cout<<*(max_element(arr,arr+a));
}
else
cout<<s2<<endl;

}
return 0;


/* END OF MAIN */
}