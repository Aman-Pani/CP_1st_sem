//prime or not
#include<stdio.h>
void prime(int);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    prime(n);
}
void prime(int x)
{
    int f=1,i;
    for(i=2;i<x;i++)
        if(x%i==0)
        {
            f=0;
        }
    if(f==1)
        printf("\nNumber is prime.");
    else
        printf("\nNumber is not prime.");
}
