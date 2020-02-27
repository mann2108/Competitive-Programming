/// @author mann2108
/// CodeMania

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pb push_back

bool sorted1(ll p1,ll p2){return p1>p2;}
bool sorted2(pair<ll,ll> p1,pair<ll,ll> p2){return p1.first>p2.first;}
bool sorted3(pair<pair<ll,ll>,pair<ll,ll> > p1,pair<pair<ll,ll>,pair<ll,ll> > p2){return p1.first.first>p2.first.second;}

void debug(ll temp=0){cout<<"Debug : "<<temp<<endl;}

int lcs( string X, string Y, ll m, ll n )
{
    ll L[m + 1][n + 1];
    ll i, j;
    for (i = 0; i <= m; i++){
        for (j = 0; j <= n; j++){
        if (i == 0 || j == 0)
            L[i][j] = 0;

        else if (X[i - 1] == Y[j - 1])
            L[i][j] = L[i - 1][j - 1] + 1;

        else
            L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }
    return L[m][n];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1,s2;
    cin>>s1>>s2;
    ll m=s1.length();
    ll n=s2.length();
    cout<<lcs(s1,s2,m,n)<<endl;;
}