//sum of squar of n consicutive number
#include<stdio.h>
main()
{
    int n,sum;
    printf("Enter value of n:");
    scanf("%d",&n);
    sum=n*(n+1)*(2*n+1)/6;
    printf("sum=%d",sum);

}

