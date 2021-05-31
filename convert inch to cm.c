/*convert a value from inch to cm*/
#include<stdio.h>
void main()
{
    float inch,cm;
    printf("enter distance in inch:");
    scanf("%f",&inch);
    cm=inch*2.54;
    printf("value in cm:%f",cm);
}
