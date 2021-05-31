//Sum of digits
#include<stdio.h>
main()
{
    int num,sum,d1,d2,d3;
    printf("Enter a three digit number:");
    scanf("%d",&num);
    d1=num%10;
    num=num/10;
    d2=num%10;
    num=num/10;
    d3=num;
    sum=d1+d2+d3;
    printf("The sum of digits=%d\n",sum);
    printf("d3, d2, d1 =%d, %d, %d",d1,d2,d3);
}
