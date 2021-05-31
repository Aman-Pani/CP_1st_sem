//Sum of first and last digit
#include<stdio.h>
main()
{
    int num,sum,d1,d4;
    printf("Enter a four digit number:");
    scanf("%d",&num);
    d1=num%10;
    num=num/1000;
    d4=num;
    sum=d1+d4;
    printf("Sum of first and last digits=%d\n",sum);

}


