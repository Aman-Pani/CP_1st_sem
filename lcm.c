// lcm of two numbers
#include<stdio.h>
main()
{
    int n1,n2,lcm;
    printf("Enter two numbers:\n");
    scanf("%d%d",&n1,&n2);
    lcm=(n1>n2)?n1:n2;
    while(lcm%n1!=0||lcm%n2!=0)
    {
        lcm++;
    }
    printf("%d",lcm);
}
