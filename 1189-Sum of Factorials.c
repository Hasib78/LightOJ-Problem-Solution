#include<stdio.h>
int main()
{
    long long int t,n,i,j,k,l;
    long long int f[100000],temp[100000];
    f[0]=1;
    scanf("%lld",&t);
    for(i=1; i<=20; i++)
    {
        f[i]=f[i-1]*i;
    }
    for(j=0; j<t; j++)
    {
        scanf("%lld",&n);
        l=0;
        for(k=20; k>=0; k--)
        {
            if(n>=f[k])
            {
                temp[l++]=k;
                n-=f[k];
            }
        }

        if(n==0)
        {
            printf("Case %lld: ",j+1);
            for(i=l-1;i>0;i--)
            {
                printf("%lld!+",temp[i]);
            }
            printf("%lld!\n",temp[0]);

        }
        else
        {
            printf("Case %lld: ",j+1);
            printf("impossible\n");
        }


    }


}
