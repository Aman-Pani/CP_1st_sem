//different operation between two numbers
#include <stdio.h>

int add(int,int );
int sub(int,int );
int mult(int,int );
float div(int,int);
main()
{
    int n1, n2, ans;
    char ch;
    printf("Enter 2 numbers : ");
    scanf("%d%d", &n1, &n2);
    printf("Enter any operator (+, -, *, /): ");
    scanf(" %c", &ch);
    switch(ch)
    {
    case '+':
        ans=add(n1,n2);
        break;
    case '-':
        ans=sub(n1,n2);
        break;
    case '*':
        ans=mult(n1,n2);
        break;
    case '/':
        ans=div(n1,n2);
        break;
    }
    printf("%d", ans);
    return 0;
}

int add(int a,int b)
{
    printf("sum is=");
    return a+b;
}
int sub(int a,int b)
{
    printf("substraction is=");
    return a-b;
}
int mult(int a,int b)
{
    printf("product is=");
    return a*b;
}
float div(int a,int b)
{
    printf("division is=");
    return 1.0*a/b;
}
