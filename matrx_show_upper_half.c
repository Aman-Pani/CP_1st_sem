//show the upper half of the matrix
#include<stdio.h>
main()
{
    int a[10][10],n,i,j;
    printf("Size of square matrix:");
    scanf("%d",&n);
    printf("Enter the matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    printf("Upper half of matrix is:\n");
    //printf("Lower half of matrix is:\n");
    for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            if(i<j)
            //if(i>j)
            {
                printf("%d\t",a[i][j]);
            }
            else
                printf("_\t");
        printf("\n");
        }
}
