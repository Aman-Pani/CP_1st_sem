//check whether a no. is +ve or -ve
#include<stdio.h>
main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num>0)
        printf("%d is positive",num);
    else if(num<0)
        printf("%d is negative",num);
    else
        printf("\n0 is neither positive nor negative");

}
