#include<stdio.h>
#include<math.h>
int main()
{
    double n,a,b,c,d,e,f,g,h,l,x,y,z;
    int i;
    scanf("%lf",&n);
    for(i=0; i<n; i++)
    {
        scanf("%lf %lf %lf",&a,&b,&c);
        l=(a*a)+(b*b)-(c*c);
        d=l/(2*a*b);
        x=acos(d);
        e=(x*180)/3.1416;
        if(e>89.999)
        {
            printf("Case %d: yes\n",i+1);
        }
        else
        {
            z=sin(e*3.1416/180);
            f=(b/c)*z;
            y=asin(f);
            g=(y*180/3.1416);
            if(g>89.999)
            {
                printf("Case %d: yes\n",i+1);
            }
            else
            {

                h=180-e-g;
                if(h>89.999)
                {
                    printf("Case %d: yes\n",i+1);
                }
                else
                {
                    printf("Case %d: no\n",i+1);
                }
            }
        }

    }

    return 0;
}
