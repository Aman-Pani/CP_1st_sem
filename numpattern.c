//number pyramid pattern
#include<stdio.h>
main()
{
    int i,j,row,space;
    printf("Enter no. of rows:");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        //for(space=1;space<=row-i;space++)
          // printf(" ");
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
            printf("\n");

    }
}

