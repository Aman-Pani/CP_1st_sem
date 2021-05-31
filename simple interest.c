//calculation of simple interest
#include<stdio.h>
main()
{
    float principal,rate,time,simple_interest;
    printf("Principal:");
    scanf("%f",&principal);
    printf("Rate:");
    scanf("%f",&rate);
    printf("Time:");
    scanf("%f",&time);
    simple_interest=principal*rate*time/100;
    printf("Simple Interest:%f",simple_interest);
}
