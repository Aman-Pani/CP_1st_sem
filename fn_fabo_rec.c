//fabo rec
#include<stdio.h>
int fibo(int);
void main()
{
    int n,i;
    printf("enter number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        printf("%d\t",fibo(i));
}
int fibo(int m)
{
    if(m==0 || m==1)
        return m;
    else
        return fibo(m-1)+fibo(m-2);
}
