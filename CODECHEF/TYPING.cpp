/// @author mann2108
/// Problem : TYPING


#include<bits/stdc++.h>
#define ll long long int
#define ull unsinged long long int
#define llf long float

using namespace std;

bool sortbysec(const pair<ll,ll> &a,const pair<ll,ll> &b){
    return ((a.second*a.first) > (b.second*b.first));
}

long double sumS(string s){
long double sum=0.2;
for(ll i=1;s[i]!='\0';i++){
    if(s[i]=='j' || s[i]=='k'){
        if(s[i-1]=='j' || s[i-1]=='k'){
            sum+=0.4;
        }
        else{
            sum+=0.2;
        }
    }
    else{
        if(s[i-1]=='d' || s[i-1]=='f'){
            sum+=0.4;
        }
        else{
            sum+=0.2;
        }
    }

}
return sum;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector <pair<string ,long double> >vec;
        long double sum=0;
        for(ll i=0;i<n;i++){
            string ss;
            cin>>ss;
            sum=sumS(ss);
            vec.push_back(make_pair(ss,sum));
            sum=0;
        }
        sort(vec.begin(),vec.end());
        for(ll i=0;i<n;i++){
            sum+=vec[i].second;
        }
        for(ll i=1;i<n;i++){
            if(vec[i].first == vec[i-1].first){
                sum-=(vec[i].second/2);
            }
        }
        cout<<sum*10<<endl;
    }
}

