//matrix is symmetric or not
#include<stdio.h>
main()
{
    int i,j,x[10][10],t[10][10], r, c, flag;
    printf("enter size of matrix :");
    scanf("%d%d",&r,&c);
    if(r==c)
    {
    printf("enter elements :\n");
    for(i=0;i<r;i++)
    {
         for(j=0;j<c;j++)
         {
             scanf("%d",&x[i][j]);
         }
    }
    }
    //Finding the transpos
    for(i=0;i<r;i++)
    {
         for(j=0;j<c;j++)
         {
             t[i][j] = x[j][i];
         }
    }

    flag = 0;
    for(i=0;i<r;i++)
    {
         for(j=0;j<c;j++)
         {

                if(x[i][j]!=t[i][j])
                {
                    flag = 1;
                    break;
                }
         }
    }
    if(flag == 0)
    {
        printf("symmetric");
    }
    else
        printf("not symmetric");
}
