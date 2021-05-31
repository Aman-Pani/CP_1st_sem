//power
#include<stdio.h>
float powr(int,int);
main()
{
    int n,p;
    printf("enter a number and its power :\n");
    scanf("%d%d",&n,&p);
    printf("%f",powr(n,p));
}
float powr(int x,int y)
{
    int i,b;
    float sum=1;
    b=y-(2*y);
    for(i=1;i<=y || i<=b;i++)
    {
        if(y>=0)
            sum=sum*x;
        else
            sum=sum/x;
    }
    return sum;
}

