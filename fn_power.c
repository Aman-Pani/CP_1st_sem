//power
#include<stdio.h>
float pow(int,int);
main()
{
    int n1,n2;
    printf("enter two numbers:");
    scanf("%d%d",&n1,&n2);
    printf("%f",pow(n1,n2));
}
float pow(int x,int y)
{
    int i,b;
    float sum=1;
    b=y-(2*y);
    for(i=1;i<=y || i<=b;i++)
    {
        if(y>=0)
            sum*=x;
        else
            sum/=x;
    }
    return sum;
}
