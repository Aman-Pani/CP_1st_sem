//calculate value of t
#include<stdio.h>
main()
{
    float t,a,b,c,d,x;
    printf("Enter the value of a,b,c,d,x respectively:\n");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&x);
    t=a*x*x*x+b*x*x+c*x+d;
    printf("Value of t=%f",t);
}

