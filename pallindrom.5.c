//check whether a no. is palindrom or not
#include<stdio.h>
main()
{
    int num,a,r,rev;
    printf("Enter a number:");
    scanf("%d",&num);
    rev=0;
    a=num;
    while(a>0)
    {
        r=a%10;
        rev=rev*10+r;
        a=a/10;
    }
    if(num==rev)
        printf("pallindrom");
    else
        printf("not a pallindrom");
}
