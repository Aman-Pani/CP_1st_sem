//matrix is symmetric or not
#include<stdio.h>
main()
{
    int m[5][5],siz,i,j,x=0;
    printf("Size of square matrix:");
    scanf("%d",&siz);
    printf("Enter the matrix:\n");
    for(i=0;i<siz;i++)
        for(j=0;j<siz;j++)
            scanf("%d",&m[i][j]);
    for(i=0;i<siz;i++)
        for(j=0;j<siz;j++)
            if(m[i][j]!=m[j][i])
            {
                x=1;
                //break;
            }
    if(x==0)
        printf("\nMatrix is symmetrical.\n");
    else
        printf("\nMatrix is non-symmetrical.\n");
}
