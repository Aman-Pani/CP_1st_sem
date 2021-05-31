//product of matrix
#include<stdio.h>
main()
{
    int i,j,k,r1,c1,r2,c2,sum=0;
    printf("Enter number of rows and columns of matrix A:");
    scanf("%d %d",&r1,&c1);
    printf("Enter number of rows and columns of matrix B:");
    scanf("%d %d",&r2,&c2);
    int A[r1][c1],B[r2][c2],mul[r1][c2];
    if(c1==r2)
 {
  //read matrix A
    printf("Enter Matrix A\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
            scanf("%d",&A[i][j]);
    }
  //read matrix B
    printf("Enter Matrix B\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
            scanf("%d",&B[i][j]);
    }
 //multiplication of matrix A&B
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<r2;k++)   //for(k=0;k<c1;k++)
            {
                sum=sum+(A[i][k]*B[k][j]);
            }
            mul[i][j]=sum;
            sum=0;
        }
    }
 //print A*B
    printf("multiplication of matrix A&B:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }
 }
 else
    printf("\n multiplication can't perform.");
}
