#include<stdio.h>
int main()
{
    long long int n,a,b,c,d,i;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld %lld",&a,&b);
        if(a==0)
        {
            continue;
        }
        if(a<=b)
        {

        c=(b*4)+19;
        printf("Case %lld: %lld\n",i+1,c);

        }
        else
        {
            c=a-b;
            d=(c*4)+(a*4)+19;
            printf("Case %lld: %lld\n",i+1,d);
        }
    }
}
