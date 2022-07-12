#include<stdio.h>
int main()
{
    long long int a,b,c,i,j,count;
    scanf("%lld",&a);
    for(i=0; i<a; i++)
    {
        scanf("%lld",&b);
        count=0;

        while(b!=0)
        {
            c=b%2;
            b=b/2;

            if(c==1)
            {
                count++;
            }

        }
        if(count%2==0)
        {
            printf("Case %lld: even\n",i+1);
        }
        else
        {
            printf("Case %lld: odd\n",i+1);
        }

    }
    return 0;
}
