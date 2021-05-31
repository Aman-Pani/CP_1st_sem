/*convert fahrenheit to celsius*/
#include<stdio.h>
main()
{
    float F,fahrenheit,celsius=0.0;
    F=fahrenheit;
    printf("temp in fahrenheit:");
    scanf("%f",&F);
    celsius=(F-32)*5.0/9.0;
    printf("celsius:%f",celsius);

}

