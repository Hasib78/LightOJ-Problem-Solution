#include<stdio.h>
int main()
{
    int f,n,m,i,j,k,a,b,h,temp,l,s,t,sum,mul,div;
    int x[1000];
    char y;

    scanf("%d",&f);
    for(i=0; i<f; i++)
    {
        scanf("%d %d",&n,&m);


        for(j=0; j<n; j++)
        {
            scanf("%d",&x[j]);

        }
        getchar();

        for(k=0; k<m; k++)
        {
            scanf("%c",&y);

            if(y=='S')
            {
                scanf("%d",&s);

                for(j=0; j<n; j++)
                {
                    x[j]=x[j] + s;
                }
                getchar();
            }
            else if(y=='M')
            {
                scanf("%d",&s);

                for(j=0; j<n; j++)
                {
                    x[j]=x[j] * s;
                }
                getchar();
            }
            else if(y=='D')
            {
                scanf("%d",&s);

                for(j=0; j<n; j++)
                {
                    x[j]=x[j] / s;
                }
                getchar();
            }
            else if(y=='P')
            {
                scanf("%d %d",&s,&t);

                    temp=x[s];
                    x[s]=x[t];
                    x[t]=temp;
                    getchar();

            }
            else if(y=='R')
            {

                for(j=0,h=n-1; j<n/2; j++,h--)
                {
                    temp=x[j];
                    x[j]=x[h];
                    x[h]=temp;

                }
                getchar();
            }

        }
        printf("Case %d:\n",i+1);
        for(j=0; j<n; j++)
        {
            if(j==n-1)
            {
                printf("%d\n",x[j]);

            }
            else
            {
                printf("%d ",x[j]);
            }


        }
    }
}
