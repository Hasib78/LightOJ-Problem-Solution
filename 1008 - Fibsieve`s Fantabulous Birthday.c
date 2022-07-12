#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,c,d,e,f,i,j;
    scanf("%lld",&a);
    for(i=0;i<a;i++)
    {
        scanf("%lld",&b);
        c=sqrt(b);
        d=c+1;
        e=(c*c)+(d*d);
        f=(e+1)/2;
        if(b==f)
        {
            printf("Case %lld: %lld %lld\n",i+1,d,d);
        }
    }
}
