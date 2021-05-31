//convert days to year,month,day
#include<stdio.h>
main()
{
    int day,mon,yr;
    printf("Enter days:",&day);
    scanf("%d",&day);
    yr=day/365;
    day=day%365;
    mon=day/30;
    day=day%30;
    printf("%d year, %d month, %d day",yr,mon,day);
}
