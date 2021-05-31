//calculation of compound interest
#include<stdio.h>
main()
{
    float principal,rate,time,compoundinterest;
    printf("principal:");
    scanf("%f",&principal);
    printf("rate:");
    scanf("%f",&rate);
    printf("time:");
    scanf("%f",&time);
    compoundinterest=principal*(pow((1+rate/100),time))-principal;
    printf("Compound Interest:%f",compoundinterest);
}
