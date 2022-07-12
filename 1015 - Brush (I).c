#include<stdio.h>
int main()
{
    long long int n,a,b,c,d,i,j;
    scanf("%lld",&n);
    for(i=0; i<n; i++)
    {

        scanf("%lld",&a);
        c=0;
        for(j=0; j<a; j++)
        {

            scanf("%lld",&b);

            if(b>0)
            {
                c=c+b;
            }


        }
        printf("Case %lld: %lld\n",i+1,c);


    }


}
