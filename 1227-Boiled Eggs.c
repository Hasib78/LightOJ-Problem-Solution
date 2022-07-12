#include<stdio.h>
int main()
{
    int t,n,p,q,a,i,j,b,x,count,c;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&n,&p,&q);
        b=0;
        x=0;
        count=0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&a);
            b=b+a;
            count++;
            if(b>q)
            {
                x++;
            }
        }
        c=count-x;
        if(c<=p)
        {
            printf("Case %d: %d\n",i+1,c);
        }
        else
        {
          printf("Case %d: %d\n",i+1,p);
        }
    }
    return 0;
}
