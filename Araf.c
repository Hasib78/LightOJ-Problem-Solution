#include<stdio.h>

int sum(int n, int j,int sum1)
{

    if(n==1)
    {
        return sum1+1;
    }
    else
    {

            j=j*2;
            sum1=sum1+j;

            sum(n-1,j,sum1);




    }



}

int main()
{
    int a,b,j=1,sum1=0;
    scanf("%d",&a);
    if(a==1)
    {
        printf("1\n");
    }
    else
    {

    b=sum(a,j,sum1);
    printf("%d\n",b);
    }



}




