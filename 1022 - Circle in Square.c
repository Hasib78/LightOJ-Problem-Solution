#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,e,pi=2*acos(0.0);
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lf",&a);
        b=pi*a*a;
        c=2*a;
        d=c*c;
        e=d-b;
        printf("Case %d: %.2lf\n",i+1,e);
    }
    return 0;
}
