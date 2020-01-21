#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool isPrime(ll n){
    if(n<2){
        return false;
    }
    else if(n==2){
        return true;
    }
    else{
        for(ll i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
}

ll findE(ll lower,ll upper,ll phiFunction){
    ll e;
    while(true){
        e = (rand()%(upper-lower+1))+lower;
        if(__gcd(e,phiFunction)==1){
            return e;
        }
    }
}

ll findModInverse(ll a,ll m){
    ll m0=m;
    ll y=0,x=1;
    if(m==1)return 0;
    while(a>1){
        ll q=a/m;
        ll t=m;
        m=a%m;
        a=t;
        t=y;
        y=x-q*y;
        x=t;
    }
    if(x<0){
        x+=m0;
    }
    return x;
}

ll power(ll a, ll b,ll m) {
    a=a%m;
    if (b == 0)
        return 1;
    ll res = power(a, floor((long double)b / (long double)2),m);
    if (b % 2)
        return (((res * res)%m) * a)%m;
    else
        return (res * res)%m;
}

int main(){

    ll lower = 100000;
    ll upper = 999999;
    ll n,phiFunction,p,q,e,d;

    while(true){
        p = (rand()%(upper-lower+1))+lower;
        if(isPrime(p)){
            break;
        }
    }

    while(true){
        q = (rand()%(upper-lower+1))+lower;
        if(isPrime(q) and q!=p){
            break;
        }
    }
    n=p*q;
    phiFunction = (p-1)*(q-1);

    e = findE(lower,upper,phiFunction);
    d = findModInverse(e,phiFunction);
    ll text = 65;
    ll c = power(text,e,n);
    ll m = power(c,d,n);

    cout<<"P:"<<p<<endl;
    cout<<"Q:"<<q<<endl;
    cout<<"N:"<<n<<endl;
    cout<<"phi:"<<phiFunction<<endl;
    cout<<"E:"<<e<<endl;
    cout<<"D:"<<d<<endl;
    cout<<"C:"<<c<<endl;
    cout<<"M:"<<m<<endl;
}

