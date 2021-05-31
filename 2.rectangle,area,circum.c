/*circumference n area of rectangle*/
#include<stdio.h>
main()
{
    float len,brt,area,circm;
    printf("Enter value of length:");
    scanf("%f",&len);
    printf("Enter value of breadth:");
    scanf("%f",&brt);
    area=len*brt;
    circm =2*(len + brt);
    printf("area of rectangle=%f\n",area);
    printf("circumference of rectangle=%f",circm);

}

