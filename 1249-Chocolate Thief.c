#include<stdio.h>
#include<string.h>
int main()
{
    int t,n,l,w,h,i,j,a,b,sum,count,max,min;
    char x[1000],z[1000],y[1000];
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&n);
        sum=0;
        count=0;
        scanf("%s%d%d%d",&x,&l,&w,&h);
        a=l*w*h;
        max=min=a;
        strcpy(y,x);
        strcpy(z,x);


        for(j=1; j<n; j++)
        {
            scanf("%s%d%d%d",&x,&l,&w,&h);
            b=l*w*h;
            if(b>max)
            {
                max=b;
                strcpy(y,x);
            }
            else if(b<min)
            {
                min=b;
                strcpy(z,x);
            }

        }
        if(max==min)
        {
            printf("Case %d: no thief\n",i+1);
        }
        else
        {
            printf("Case %d: %s took chocolate from %s\n",i+1,y,z);
        }

    }
    return 0;

}
