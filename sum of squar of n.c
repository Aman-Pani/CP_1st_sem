//sum of square of n numbers
#include<stdio.h>
main()
{
    int num,i=1,sum=0;
    printf("enter value of n:");
    scanf("%d",&num);
    while(i<=num)
    {
        sum=sum+i*i;
        i++;
    }
    printf("sum=%d",sum);
}

