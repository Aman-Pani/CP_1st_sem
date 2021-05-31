//find greatest among three numbers
#include<stdio.h>
main()
{
    int n1,n2,n3,greatest;
    printf("Enter three numbers:\n");
    scanf("%d%d%d",&n1,&n2,&n3);
    greatest=(n1>n2)?(n1>n3?n1:n3):(n2>n3?n2:n3);
    printf("\nThe greatest value is:%d",greatest);
}

