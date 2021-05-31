//check the number is armstrong num. or not
#include<stdio.h>
main()
{
    int num,x,sum=0;
    printf("enter a number:");
    scanf("%d",&num);
    x=num;
    while(x>0)
    {
        sum=sum+pow((x%10),3);
        x=x/10;
    }
    if(num==sum)
        printf("%d is an armstrong number.",num);
    else
        printf("%d is not an armstrong number.",num);
}
