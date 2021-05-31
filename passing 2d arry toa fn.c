#include<stdio.h>
void input(int[10][10],int,int);
void add(int[10][10],int[10][10],int,int);
main()
{
    int a[10][10],b[10][10],r,c;
    printf("enter row n column:");
    scanf("%d%d",&r,&c);
    printf("enter elements of 1st matrix:");
    input(a,r,c);
    printf("enter elements of 2nd matrix:");
    input(b,r,c);
    add(a,b);
}
void input(int x[10][10],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
}
void add(int x[10][10],int y[10][10],int,int,int,int)
{
    int i,j,z[10][10];
     for(i=0;i<r;i++)
     {
         for(j=0;j<c;j++)
         {
             z[i][j]=x[i][j]+y[i][j];
             printf("%d",z[i][j]);
         }
     }
}
