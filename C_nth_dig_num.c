//find nth digit of a number
#include<stdio.h>
#include<math.h>
main()
{
    int num,d,i;
    printf("Enter the number and the place of digit : ");
    scanf("%d%d",&num,&d);
    i=num%(pow(10,d));
    i=i/(pow(10,d-1));
    printf("The digit is : %d",i);
}
