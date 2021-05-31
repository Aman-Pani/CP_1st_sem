//Conversion of rectangular cod. to polar cod.
#include<stdio.h>
main()
{
    float x,y,r,theta,pi=3.14,red;
    printf("Enter x:");
    scanf("%f",&x);
    printf("Enter y:");
    scanf("%f",&y);
    r=sqrt(x*x+y*y);
    theta=atan(y/x);
    //theta=180*theta/pi;    //red=theta*pi/180;
    printf("Polar coordinate(r,theta):(%f,%f)",r,theta);

}
