//sum of n num
#include<stdio.h>
int sum(int);
int main()
{
    int n;
    printf("Enter no. of terms : ");
    scanf("%d",&n);
    printf("sum is : %d",sum(n));
    return 0;
}
int sum(int n)
{
    if(n>0)
        return n+sum(n-1);
    else
        return 0;
}

