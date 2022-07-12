#include<stdio.h>
int main()
{
    long long int t,n,m,i,a;
    scanf("%lld",&t);
    for(i=0; i<t; i++)
    {
        scanf("%lld%lld",&n,&m);
        a=(n*m)/2;

        printf("Case %lld: %lld\n",i+1,a);


    }
}
