#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,c,d,e,f,g,h,i,j;
    double b,x,y,z;
    scanf("%lld",&a);
    for(i=0; i<a; i++)
    {
        scanf("%lf",&b);
        x=sqrt(b);
        c=sqrt(b);
        y=x-c;
        if(y==0)
        {
            if(c%2==0)
            {
                printf("Case %lld: %lld 1\n",i+1,c);
            }
            else
            {
                printf("Case %lld: 1 %lld\n",i+1,c);
            }
        }
        else
        {
            d=c+1;
            e=(c*c)+(d*d);
            f=(e+1)/2;
            if(b==f)
            {
                printf("Case %lld: %lld %lld\n",i+1,d,d);
            }
            else
            {
                if(b>f)
                {
                    g=d*d;
                    h=(g-b)+1;
                    if(d%2==0)
                    {
                        printf("Case %lld: %lld %lld\n",i+1,d,h);
                    }
                    else
                    {
                        printf("Case %lld: %lld %lld\n",i+1,h,d);
                    }
                }
                else if(b<f)
                {
                    g=c*c;
                    h=b-g;
                    if(d%2==0)
                    {
                        printf("Case %lld: %lld %lld\n",i+1,h,d);

                    }
                    else
                    {

                        printf("Case %lld: %lld %lld\n",i+1,d,h);

                    }
                }


            }
        }
    }
}
