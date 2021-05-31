//vol. of cylinder
#include<stdio.h>
main()
{
    float vol,red,hei,pi=3.14;;
    printf("Enter radius and height:\n");
    scanf("%f%f",&red,&hei);
    vol=pi*red*red*hei;
    printf("Volume:%f",vol);
}
