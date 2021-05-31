//sum of cubes of n consicutive number
#include<stdio.h>
main()
{
    int n,sum;
    printf("Enter value of n:\n");
    scanf("%d",&n);
    sum=(n*(n+1)/2);
    sum=sum*sum;       //sum=(n*(n+1)/2)*(n*(n+1)/2)
    printf("sum=%d",sum);

}

