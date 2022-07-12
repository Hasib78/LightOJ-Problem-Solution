#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    double a,b,c,d,e,f,g,h,x,y,z;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);
        g=(a+e)/2;
        h=(b+f)/2;
        x=(g*2)-c;
        y=(h*2)-d;
        z=abs(a*(d-f)+c*(f-b)+e*(b-d))/2;
        printf("Case %d: %.0lf %.0lf %.0lf\n",i+1,x,y,z*2);

    }
}
