//power rec
#include<stdio.h>
int power(int,int);
int main()
{
    int n,p;
    printf("Enter no. & power : ");
    scanf("%d%d",&n,&p);
    printf("power is : %d",power(n,p));
    return 0;
}

int power(int a,int b)
{
    if(b>0)
        return a*power(a,b-1);
    else
        return 1;
}
