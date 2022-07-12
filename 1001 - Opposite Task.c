#include<stdio.h>
int main()
{
    int a,b,c,i;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&b);
        if(b<=10)
        {
            printf("0 %d\n",b);
        }
        else
        {
            c=b-10;
            printf("%d 10\n",c);
        }
    }
}
