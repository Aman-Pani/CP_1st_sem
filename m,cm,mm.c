//calculate meter,centimeter,milimeter
#include<stdio.h>
main()
{
    int mm,cm,m;
    printf("Enter mms:");
    scanf("%d",&mm);
    m=mm/1000;
    mm=mm%1000;
    cm=mm/10;
    mm=mm%10;
    printf("%d m, %d cm, %d mm",m,cm,mm);
}

