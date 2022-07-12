#include<stdio.h>
int main()
{
    long long int n,a,b,c,i,sum;
    scanf("%lld",&n);
    for(i=0; i<n; i++)
    {
        scanf("%lld",&a);
        sum=0;
        c=a;
        while(c!=0)
        {
            b=c%10;
            sum=sum*10+b;
            c=c/10;
        }
        if(a==sum)
        {
            printf("Case %lld: Yes\n",i+1);
        }
        else
        {
            printf("Case %lld: No\n",i+1);
        }

    }
    return 0;
}
