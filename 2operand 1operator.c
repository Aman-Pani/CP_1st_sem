//Enter two operands and an operator then calculate
#include<stdio.h>
main()
{
  int a,b,res;
  char c;
  printf("Enter any one operator +, -, *, /: ");
  scanf("%c",&c);
  printf("Enter two numbers:\n");
  scanf("%d%d",&a,&b);
  switch(c)
  {
    case '+': res=a+b;
    printf("The sum is %d",res);
    break;

    case '-': res=a-b;
    printf("The difference is %d",res);
    break;

    case '*': res=a*b;
    printf("The product is %d",res);
    break;

    case '/': res=a/b;
    printf("The quotient is %d",res);
    break;

    default: printf ("Invalid entry");
  }
}


