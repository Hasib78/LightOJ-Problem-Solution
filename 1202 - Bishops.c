#include<stdio.h>
int main()
{
    long long int a,b1,c1,b2,c2,d,e,f,g,i;
    scanf("%lld",&a);
    for(i=0; i<a; i++)
    {
        scanf("%lld%lld%lld%lld",&b1,&c1,&b2,&c2);
        if(b1>=b2)
        {
            f=b1-b2;
        }
        else
        {
            f=b2-b1;
        }
        if(c1>=c2)
        {
            g=c1-c2;
        }
        else
        {
            g=c2-c1;
        }
        d=(b1+c1)%2;
        e=(b2+c2)%2;


        if(d==0 && e!=0)
        {
            printf("Case %lld: impossible\n",i+1);
        }
        else if(d!=0 && e==0)
        {
            printf("Case %lld: impossible\n",i+1);
        }
        else
        {


            if(f==g)
            {
                printf("Case %lld: 1\n",i+1);
            }

            else
            {
                printf("Case %lld: 2\n",i+1);
            }
        }

    }



}
