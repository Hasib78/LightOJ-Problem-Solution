#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    double a,b,c,x,y,z,s,k,l,m,n,o,p;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lf%lf%lf",&a,&b,&c);
        x=a+b;
        y=b+c;
        z=c+a;
        s=(x+y+z)/2;
        k=sqrt(s*(s-x)*(s-y)*(s-z));
        l=.5*a*a*acos(((x*x)+(z*z)-(y*y))/(2*x*z));
        m=.5*b*b*acos(((x*x)+(y*y)-(z*z))/(2*x*y));
        n=.5*c*c*acos(((y*y)+(z*z)-(x*x))/(2*y*z));
        o=l+m+n;
        p=k-o;
        printf("Case %d: %.10lf\n",i+1,p);

    }
    return 0;
}
