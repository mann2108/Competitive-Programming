/*

Name:- Mann Mehta
Codechef Id:- mann2108

Problem Code:- DPAIRS

*/

//#include<bits/stdc++.h>
//#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
typedef long long int ll;

/*
Complexity O(max(N,M))
*/

int main(){
    ll n,m;

    cin>>n>>m;
    ll x;

    vector<pair<ll,ll> > a;
    vector<pair<ll,ll> > b;

    pair<ll,ll> max =make_pair(-1,-1);
    pair<ll,ll> min =make_pair(2000000,-1);

    for(ll i=0;i<n;i++){
        cin>>x;
        if(x>max.first){
            max=make_pair(x,i);
        }
        a.push_back(make_pair(x,i));
    }

    for(ll j=0;j<m;j++){
        cin>>x;
        if(x<min.first){
            min=make_pair(x,j);
        }
        b.push_back(make_pair(x,j));
    }
    for(ll i=0;i<n;i++){
        cout<<a[i].second<<" "<<min.second<<endl;
    }
    for(ll i=0;i<m;i++){
        if(i!=min.second){
            cout<<max.second<<" "<<b[i].second<<endl;
        }
    }
}