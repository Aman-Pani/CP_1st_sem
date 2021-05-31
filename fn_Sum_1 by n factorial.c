//Sum = 1+ ½! + 1/3! + …..1/n!
#include<stdio.h>
float sum(int);
int main()
{
    int n;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    printf("Sum = %f",sum(n));
    return 0;
}
float sum(int x)
{
    int i;
    float fact=1,sum=0;
    for(i=1;i<=x;i++)
    {
        fact=fact*i;
        sum=sum+(1/fact);
    }
    return sum;
}
