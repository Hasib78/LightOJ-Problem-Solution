#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    long long int t,b,x,y,z,i,j,k,mod;
    char a[100000];
    scanf("%lld",&t);
    for(k=0;k<t;k++)
    {
        scanf("%s %lld",a,&y);
        b=abs(y);
        x=strlen(a);
        if(a[0]=='-')
        {
            i=1;
        }
        else
        {
            i=0;
        }
        mod=0;
        for(j=i;j<x;j++)
        {
           mod=(a[j]-48)+(mod*10);
           mod=mod%b;
        }
        if(mod==0)
        {
            printf("Case %lld: divisible\n",k+1);
        }
        else
        {
            printf("Case %lld: not divisible\n",k+1);
        }



    }
}
