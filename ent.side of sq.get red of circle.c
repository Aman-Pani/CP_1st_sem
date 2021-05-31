//Enter side of square and get redius of circle of same area
#include<stdio.h>
main()
{
    float side,red,area,pi=3.14;
    printf("side of square:");
    scanf("%f",&side);
    area=side*side;
    red=sqrt(area/pi);
    printf("Radius of circle:%f",red);
}
