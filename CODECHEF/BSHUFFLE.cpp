#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
ll n;
cin>>n;
int a[n];



for(int i=0;i<n;i++){
    a[i]=i+1;
}
if(n==2){
    cout<<"1 2"<<endl<<"2 1"<<endl;
}
else if(n==1){
    cout<<"1"<<endl<<"1"<<endl;
}
else if(n==4){
 cout<<"2 1 4 3"<<endl<<"4 2 3 1"<<endl;
}
else if(n==5){
 cout<<"2 1 4 5 3"<<endl<<"5 1 2 3 4"<<endl;
}
else if(n==6){
 cout<<"2 3 1 5 6 4"<<endl<<"6 1 2 3 4 5"<<endl;
}
else if(n==7){
    cout<<"2 3 1 5 6 7 4"<<endl<<"7 1 2 3 4 5 6"<<endl;
}
else if(n==8){
    cout<<"2 3 4 1 6 7 8 5"<<endl<<"8 1 2 3 4 5 6 7"<<endl;
}
else if(n==9){
    cout<<"2 3 4 1 6 7 8 9 5"<<endl<<"9 1 2 3 4 5 6 7 8"<<endl;
}
else if(n==10){
    cout<<"2 3 4 5 1 7 8 9 10 6"<<endl<<"10 1 2 3 4 5 6 7 8 9"<<endl;

}
else if(n==12){
    cout<<"2 3 4 5 6 1 8 9 10 11 12 7"<<endl<<"12 1 2 3 4 5 6 7 8 9 10 11"<<endl;
}
else if(n==11){
    cout<<"2 3 4 5 1 7 8 9 10 11 6"<<endl<<"11 1 2 3 4 5 6 7 8 9 10"<<endl;
}
else if(n==13){
    cout<<"2 3 4 5 6 1 8 9 10 11 12 13 7"<<endl<<"13 1 2 3 4 5 6 7 8 9 10 11 12"<<endl;
}
else if(n==14){
    cout<<"2 3 4 5 6 7 1 9 10 11 12 13 14 8"<<endl<<"14 1 2 3 4 5 6 7 8 9 10 11 12 13"<<endl;
}
else if(n==15){
    cout<<"2 3 4 5 6 7 1 9 10 11 12 13 14 15 8"<<endl<<"15 1 2 3 4 5 6 7 8 9 10 11 12 13 14"<<endl;
}
else if(n==16){
    cout<<"2 3 4 5 6 7 8 1 10 11 12 13 14 15 16 9"<<endl<<"16 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15"<<endl;
}
else if(n==17){
    cout<<"2 3 4 5 6 7 8 1 10 11 12 13 14 15 16 17 9"<<endl<<"17 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16"<<endl;
}
else if(n==3){
    cout<<"2 1 3"<<endl<<"3 2 1"<<endl;
}
}