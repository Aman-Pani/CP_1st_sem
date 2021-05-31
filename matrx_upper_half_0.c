//convert upper half of a square matrix to zero
#include<stdio.h>
main()
{
    int a[10][10],s,i,j;
    printf("Size of square matrix:");
    scanf("%d",&s);
    printf("Enter matrix:\n");
    for(i=0;i<s;i++)
        for(j=0;j<s;j++)
            scanf("%d",&a[i][j]);
    printf("Required matrix is:\n");
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
            if(i<j)
            {
                a[i][j]=0;
                printf("%d\t",a[i][j]);
            }
            else
                printf("%d\t",a[i][j]);
        printf("\n");
    }
}
