#include<stdio.h>
int main()
{
    int t,i;
    double v1,v2,v3,a1,a2,t1,t2,s1,s2,d,b;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lf%lf%lf%lf%lf",&v1,&v2,&v3,&a1,&a2);
        t1=v1/a1;
        t2=v2/a2;
        s1=.5*a1*t1*t1;
        s2=.5*a2*t2*t2;
        d=s1+s2;
        if(t1>=t2)
        {
            b=t1*v3;
        }
        else
        {
            b=t2*v3;
        }
        printf("Case %d: %.10lf %.10lf\n",i+1,d,b);
    }
}
