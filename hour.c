  //convert second to hour,min,sec
#include<stdio.h>
main()
{
    int sec,min,hr;
    printf("Enter seconds:" );
    scanf("%d",&sec);
    hr=sec/3600;
    sec=sec%3600;
    min=sec/60;
    sec=sec%60;
    printf("%d hour %d min %d sec",hr,min,sec);
}
