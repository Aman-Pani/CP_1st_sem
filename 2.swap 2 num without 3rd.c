/*SWAP TWO NUMBERS WITHOUT USING 3RD VARIABLE*/
#include<stdio.h>
main()
{
    int x,y;
    printf("Enter the value of x:");
    scanf("%d",&x);
    printf("Enter the value of y:");
    scanf("%d",&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("x=%d\n",x);
    printf("y=%d",y);
}

