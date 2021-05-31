//print the matrix
#include<stdio.h>
main()
{
    int i,j,x[10][10],row,col;
    printf("enter rows and columns :");
    scanf("%d%d",&row,&col);
    printf("enter elements :\n");
    for(i=0;i<row;i++)
    {
         for(j=0;j<col;j++)
            scanf("%d",&x[i][j]);
    }
    printf("the matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            printf("%d ",x[i][j]);
        printf("\n");
    }
}

