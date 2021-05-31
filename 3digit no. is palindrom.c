//check whether a no. is palindrom or not
#include<stdio.h>
main()
{
    int num,d1,d3;
    printf("Enter a three digit number:");
    scanf("%d",&num);
    d1=num/100;
    d3=num%10;
    if(d1==d3)
        printf("%d is a palindrom",num);
    else
        printf("%d is not a palindrom",num);

}

