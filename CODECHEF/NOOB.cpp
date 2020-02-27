// UserName: mann2108
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


//ll test_cases;
//cin>>test_cases;


//while(test_cases--){
//}

ll no_of_elements;
cin>>no_of_elements;
long long int arr[no_of_elements];
for(long long int i=0;i<no_of_elements;i++){
    cin>>arr[i];
}

sort(arr,arr+no_of_elements);

long long int cnt=0;

for(long long int i=1;i<no_of_elements;i++){
    if(arr[i-1]!=arr[i]){
        cnt++;
    }
}

cout<<cnt+1<<endl;
return 0;

/* END OF MAIN */

}