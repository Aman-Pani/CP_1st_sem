//evaluate the expression
#include<stdio.h>
main()
{
    float x,a,b,c,d;
    printf("Enter numbers:\n");
    scanf("%f%f%f%f",&a,&b,&c,&d);
    if(c==d)
        printf("Error");
    else
    {
        x=(a-b)/(c-d);
        printf("x=%f",x);
    }
}
