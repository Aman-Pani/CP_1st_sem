//find smallest between two numbers
#include<stdio.h>
main()
{
    int n1,n2,smallest;
    printf("Enter two numbers:\n");
    scanf("%d%d",&n1,&n2);
    smallest=(n1<n2)?n1:n2;
    printf("The smallest value is:%d",smallest);
}
