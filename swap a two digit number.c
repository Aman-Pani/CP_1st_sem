#include<stdio.h>
int main()
{
    int a=83,b;
    b=a%10;
    a=a/10;
    printf("%d",b);
    printf("%d",a);
    return 0;
}
