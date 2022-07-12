#include<stdio.h>
#include<math.h>
#define A 3.141592653589793
int main()
{
    double r,n,a,b,c;
    int i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lf%lf",&r,&n);
        a=sin(A/n);
        b=a*r;
        c=b/(a+1);
        printf("Case %d: %.10lf\n",i+1,c);

    }
}
