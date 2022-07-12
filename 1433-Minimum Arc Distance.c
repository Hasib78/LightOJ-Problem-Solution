#include<stdio.h>
#include<math.h>
int main()
{
    double t,ax,ay,bx,by,ox,oy,c,z,angle,r;
    int i;
    scanf("%lf",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lf%lf%lf%lf%lf%lf",&ox,&oy,&ax,&ay,&bx,&by);
        r=sqrt(pow((ox-ax),2)+pow((oy-ay),2));
        c=sqrt(pow((bx-ax),2)+pow((by-ay),2));
        angle=(2*r*r-c*c)/(2*r*r);
        z=acos(angle);
        printf("Case %d: %.8lf\n",i+1,r*z);

    }
}
