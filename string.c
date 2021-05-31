#include<stdio.h>
main()
{
    int i,j,x[3][2];
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&x[i][j]);
            printf("%d",x[i][j]);
        }
    }
}
