//Conversion from polar cod. to rect. cod.
#include<stdio.h>
main()
{
    float x,y,r,theta,pi=3.14;
    printf("Enter polar co_ordinates(r,theta):\n");
    scanf("%f%f",&r,&theta);
    theta=theta*(pi/180);
    x=r*cos(theta);
    y=r*sin(theta);
    printf("Rectangular coordinates (x,y)=(%f,%f)",x,y);
}
