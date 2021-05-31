//function sum of digit
#include<stdio.h>
int sum(int);
main()
{
    int num;
    printf("enter number: ");
    scanf("%d",&num);
    printf("sum=%d",sum(num));
}
int sum(int n)
{
    int sum;
    while(n>0)
    {
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}
