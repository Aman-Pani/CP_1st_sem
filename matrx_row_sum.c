//row sum of a given matrix.
#include<stdio.h>
main()
{
    int a[10][10],r,c,i,j,sum;
    printf("Enter row & column of matrix:");
    scanf("%d%d",&r,&c);
    printf("Enter the matrix:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<r;i++)
    {
        sum=0;
        for(j=0;j<c;j++)
            sum+=a[i][j];
        printf("sum of row_%d is= %d\n",i+1,sum);
    }
}
