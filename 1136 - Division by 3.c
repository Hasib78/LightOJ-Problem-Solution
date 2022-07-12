#include<stdio.h>
int main()
{
    long long int a,b,c,d,i;
    scanf("%lld",&a);
    for(i=0;i<a;i++)
    {
        scanf("%lld%lld",&b,&c);
        if(b>c)
        {
            d=b;
            b=c;
            c=d;
        }
        if(b%3==0)
        {
            b=(b/3)*2;
        }
        else
        {
            b=(b/3)*2+1;

        }
        c=c+1;
        if(c%3==0)
        {
            c=(c/3)*2;
        }
        else
        {
            c=(c/3)*2+1;

        }
        printf("Case %lld: %lld\n",i+1,c-b);
    }
}
