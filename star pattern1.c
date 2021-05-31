//star triangle shape
#include<stdio.h>
main()
{
    int i,j,row;
    printf("enter row:");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
            printf("* ");
        printf("\n");
    }
}
