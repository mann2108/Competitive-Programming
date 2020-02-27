#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    long int n;
    while(t!=0)
    {
        int temp;
        cin>>n;
        long int a[n];
            for(long long int i=0; i<n; ++i)
            {
                cin>>a[i];
            }
        if(n!=1)
        {
            sort(a,a+n);
            temp=a[0]+a[1];
        }
        else{
            temp=a[0];
        }
        cout<<temp<<endl;
        t--;
    }


}