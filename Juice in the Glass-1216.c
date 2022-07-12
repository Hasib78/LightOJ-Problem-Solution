#include<stdio.h>
int main()
{
    double t,r1,r2,h,p,e,r,v;
    int i;
    scanf("%lf",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lf%lf%lf%lf",&r1,&r2,&h,&p);
        e=((r1-r2)*p)/h;
        r=e+r2;
        v=(3.141592653589793238*p*(r*r+r2*r2+r*r2))/3;
        printf("Case %d: %.9lf\n",i+1,v);
    }
    return 0;
}
