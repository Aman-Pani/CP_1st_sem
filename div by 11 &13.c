//divisible by both 11 & 13
#include<stdio.h>
main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num%11==0&&num%13==0)
        printf("%d is divisible by both 11 and 13",num);
    else
        printf("%d is not divisible by both 11 and 13",num);

}

