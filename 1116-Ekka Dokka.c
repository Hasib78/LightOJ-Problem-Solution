#include<stdio.h>
int main()
{
    long long int t,n,m,i,a,b;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        b=2;
        if(n%2!=0)
        {
            printf("Case %lld: Impossible\n",i+1);
        }
        else
        {
            a=n/2;
            if(a%2!=0)
            {
                printf("Case %lld: %lld 2\n",i+1,a);
            }
            else
            {
                while(a%2==0)
                {
                    a=a/2;
                    b=b*2;
                }
                printf("Case %lld: %lld %lld\n",i+1,a,b);
            }
        }
    }
}
