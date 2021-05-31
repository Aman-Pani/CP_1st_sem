//calculation value of S
#include<stdio.h>
main()
{
    float S,u,t,a;
    printf("Enter u,t,a:\n");
    scanf("%f%f%f",&u,&t,&a);
    S=u*t+a*t*t/2;
    printf("value of S=%f",S);
}
