/*circumference n area of circle*/
#include<stdio.h>
main()
{
    float rad,area,circm,pi=3.14;
    printf("Enter value of Radius:");
    scanf("%f",&rad);
    area=pi*rad*rad;
    printf("area of circle=%f\n",area);
    circm=2*pi*rad;
    printf("circumference of circle=%f",circm);

}
