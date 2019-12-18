/// @author mann2108
/// Problem : CHEFADD

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll bitC;

ll binaryToDecimal(ll *num){
   int dec_value=0;
   int base=1;
   int len=bitC;
   for (int i=len-1;i>=0;i--){
        if (num[i] == 1)
            dec_value += base;
        base = base * 2;
    }
    return dec_value;
}

ll countB(ll n){
    ll count = 0;
      while (n){
        count+=n&1;
        n>>=1;
      }
      return count;
    }

    ll countBits(ll x){
    ll cnt=0;
    while(x){
        x>>=1;
        cnt++;
    }
    return cnt;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        ll temp=c;
        ll bitse=0;
        while(temp){
            temp>>=1;
            bitse++;
        }
        bitC=bitse;
        ll bitA=countB(a);
        ll bitB=countB(b);


        if(bitA>bitB){
             ll x2=pow(2,bitB)-1;
            ll a1[bitC]={0};
            for(ll i=bitC-1;i>=bitC-bitA;i--){
            a1[i]=1;
            }
            ll lt=0;
            do{
            ll y=binaryToDecimal(a1);
            if(c-y<=0|| c-y<x2){
                break;
            }
            ll x=countB(c-y);
            if(x==bitB){
                lt++;
            }
            }while(next_permutation(a1,a1+bitC));
            cout<<lt<<endl;
        }
        else{
             ll x1=pow(2,bitA)-1;
            ll a1[bitC]={0};
            for(ll i=bitC-1;i>=bitC-bitB;i--){
            a1[i]=1;
            }
            ll lt=0;
            do{
            ll y=binaryToDecimal(a1);
            if(c-y<=0|| c-y<x1){
                break;
            }
            ll x=countB(c-y);
            if(x==bitA){
                lt++;
            }
            }while(next_permutation(a1,a1+bitC));
            cout<<lt<<endl;
        }
    }
}

