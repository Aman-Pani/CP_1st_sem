//vol. of sphere
#include<stdio.h>
main()
{
    float vol,red,pi=3.14;
    printf("Enter value of radius :");
    scanf("%f",&red);
    vol=pi*(pow(red,3))*4/3.0;
    printf("Volume:%f",vol);
}
