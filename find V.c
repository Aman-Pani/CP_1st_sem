//calculate value of V
#include<stdio.h>
main()
{
    float v,u,a,s;
    printf("Enter the value of u,a,s respectively:\n");
    scanf("%f%f%f",&u,&a,&s);
    v=sqrt(u*u-2*a*s);
    printf("Value of V=%f",v);
}
