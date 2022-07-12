#include<stdio.h>
int main()
{
    long long int n,a,b,c,i,j,l,sum=0;
    int x[100000];
    char d[100000],e[100000];
    scanf("%lld",&n);
    for(i=0; i<n; i++)
    {
        scanf("%lld",&a);
        int k=0;
        printf("Case %lld:\n",i+1);


        for(j=0; j<a; j++)
        {
            scanf("%s",&d);
            if(d[0]=='d')
            {
                scanf("%lld",&b);
               sum=sum+b;
            }
            else
            {
                printf("%lld\n",sum);
            }

        }

        sum=0;

    }
}
