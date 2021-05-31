//fabonic
#include<stdio.h>
void fibo(int);
void main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    fibo(num);
}
void fibo(int m)
{
    int i,f1,f2,fib;
    f1=0;
    f2=1;
    printf("%d\t%d\t",f1,f2);
    for(i=3;i<=m;i++)
    {
        fib=f1+f2;
        printf("%d\t",fib);
        f1=f2;
        f2=fib;
    }
}
