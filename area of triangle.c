/*AREA OF A TRIANGLE*/
#include<stdio.h>
main()
{
    float a,b,c,s,area,semiperimeter;
    s=semiperimeter;
    printf("Enter sides a triangle:\n");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of a triangle:%f",area);
}
