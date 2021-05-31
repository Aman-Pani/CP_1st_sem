//swap
#include<stdio.h>
void swap(int *,int *);
main()
{
    int a,b;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("a=%d  b=%d",a,b);
    swap(&a,&b);
    printf("\na=%d  b=%d",a,b);
}
void swap(int *x,int *y)
{
    int z;
    z=*x;
    *x=*y;
    *y=z;
}
