#include<stdio.h>
int main()
{
    unsigned long long int n,a,b,c,d,e,f,i;
    scanf("%llu",&n);
    for(i=0; i<n; i++)
    {
        scanf("%llu %llu %llu",&a,&b,&c);
        d=a*a;
        e=b*b;
        f=c*c;
        if(f==(d+e) || d==(f+e) || e==(d+f))
        {
            printf("Case %llu: yes\n",i+1);
        }
        else
        {
            printf("Case %llu: no\n",i+1);
        }
    }
    return 0;
}
