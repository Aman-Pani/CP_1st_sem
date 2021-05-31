//factorial
#include<stdio.h>
int fact(int);
void main()
{
    int num,facto;
    printf("enter a number:");
    scanf("%d",&num);
    facto=fact(num);
    printf("factorial=%d",facto);
}
int fact(int x)
{
    int i,y=1;
    for(i=0;i<=x;i++)
        if(i>0)
            y=y*i;
        return y;
}
