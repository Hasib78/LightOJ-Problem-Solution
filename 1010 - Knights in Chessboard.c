#include<stdio.h>
int main()
{
    long long int a,b,c,i,d,e,f;
    scanf("%lld",&a);
    for(i=0;i<a;i++)
    {
        scanf("%lld%lld",&b,&c);
        d=b*c;
        e=4*d/8;
        f=4*d%8;
        if(f==0)
        {

        printf("Case %lld: %lld\n",i+1,e);
        }
        else{
                printf("Case %lld: %lld\n",i+1,e+1);

        }


    }
}
