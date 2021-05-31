//digonals=0 rest=1
#include<stdio.h>
main()
{
    int i,j,x[10][10],siz;
    printf("enter size of mateix :");
    scanf("%d",&siz);
    for(i=0;i<siz;i++)
    {
         for(j=0;j<siz;j++)
           if(i==j)
            x[i][j]=0;
           else
            x[i][j]=1;
    }
    printf("the matrix\n");
    for(i=0;i<siz;i++)
    {
        for(j=0;j<siz;j++)
            printf("%d\t",x[i][j]);
        printf("\n");
    }
}
