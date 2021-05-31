//the sum of digits of a given integer
#include<stdio.h>
main()
{
  int num,remd,sum=0;
  printf("Enter any number: ");
  scanf("%d",&num);
  while(num>0)
  {
    remd=num%10;
    sum=sum+remd;
    num=num/10;
  }
  printf("sum=%d",sum);
}
