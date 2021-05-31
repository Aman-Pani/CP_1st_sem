//show the diagonal elements & their sum.
#include<stdio.h>
main()
{
    int a[10][10],i,j,s,sum=0;
    printf("size of matrix:");
    scanf("%d",&s);
    printf("Enter the matrix:\n");
    for(i=0;i<s;i++)
        for(j=0;j<s;j++)
            scanf("%d",&a[i][j]);
    printf("Diagonal elements are:\n");
    for(i=0;i<s;i++)
        for(j=0;j<s;j++)
            if(i==j)
            {
                printf("%d\t",a[i][j]);
                sum=sum+a[i][j];
            }
    printf("\nSum of diagonal elements is: %d",sum);
}
