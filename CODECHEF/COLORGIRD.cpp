#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
ll t;
cin>>t;
while(t--){
ll m,n;
cin>>m>>n;
char a[m][n];
ll cnt=0;
ll cnt2=0;
ll grid=m*n;
for(ll i=0;i<m;i++){
    for(ll j=0;j<n;j++){
        cin>>a[i][j];
        if(a[i][j]=='#'){
            cnt++;
        }
    }
}
for(ll i=0;i<m-1;i+=1){
    for(ll j=0;j<n-1;j+=1){

            if(a[i][j]!='#' && a[i][j+1]!='#' && a[i+1][j]!='#' && a[i+1][j+1]!='#'){
                a[i][j]=48;
                a[i][j+1]=48;
                a[i+1][j]=48;
                a[i+1][j+1]=48;
            }
    }

}
bool flag=true;
//cout<<grid<<" "<<cnt2<<" "<<cnt<<endl;
for(ll i=0;i<m;i++){
    for(ll j=0;j<n;j++){
        if(a[i][j]=='.'){
            flag=false;
        }
    }

}
if(flag){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

}
}

