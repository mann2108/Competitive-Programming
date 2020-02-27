        #include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,rev=0,rem;
        scanf("%d",&n);
        while(n>0)
        {
            rem=n;
            rev=rev*10+rem;
            n=n/10;
        }
         printf("%d\n",rev);
    }
 }