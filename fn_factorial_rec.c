//factorial rec
#include<stdio.h>
int fact(int);
main()
{
    int r,a;
    printf("enter a number:");
    scanf("%d",&a);
    printf("factorial= %d",fact(a));
}
int fact(int a)
{
    int f;
    if(a==0 || a==1)
        return 1;
    f=a*fact(a-1);
    return f;
}
