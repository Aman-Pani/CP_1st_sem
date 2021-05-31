//find greatest between two numbers
#include<stdio.h>
main()
{
    int n1,n2,greatest;
    printf("Enter two numbers:\n");
    scanf("%d%d",&n1,&n2);
    greatest=(n1>n2)?n1:n2;
    printf("The greatest value is:%d",greatest);
}

