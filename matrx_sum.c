//sum of two matrix
#include<stdio.h>
main()
{
    int A[10][10],B[10][10],C[10][10],i,j,r,c;
    printf("enter row n column:");
    scanf("%d%d",&r,&c);
    //read A
    printf("enter elements of A:\n");
    for(i=0;i<r;i++)
    {
         for(j=0;j<c;j++)
             scanf("%d",&A[i][j]);
    }
    //read B
    printf("enter elements of B:\n");
    for(i=0;i<r;i++)
    {
         for(j=0;j<c;j++)
             scanf("%d",&B[i][j]);
    }
    //calculate C
    for(i=0;i<r;i++)
    {
         for(j=0;j<c;j++)
             C[i][j]=A[i][j]+B[i][j];
    }
    //print C
    printf("the sum of matrix A & B\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d\t",C[i][j]);
        printf("\n");
    }
}
