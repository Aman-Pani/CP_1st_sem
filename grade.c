//for finding grades
#include<stdio.h>
main()
{
    int mrk;
    printf("Enter mark:\n");
    scanf("%d",&mrk);
    mrk/=10;
    switch(mrk)
    {
    case 10:
    case 9:
        printf("O");
        break;
    case 8:
        printf("E");
        break;
    case 7:
        printf("A");
        break;
    case 6:
        printf("B");
        break;
    case 5:
        printf("C");
        break;
    default:
        printf("F");
    }
}
