//find smallest among three numbers
#include<stdio.h>
main()
{
    int n1,n2,n3,smallest;
    printf("Enter three numbers:\n");
    scanf("%d%d%d",&n1,&n2,&n3);
    smallest=(n1<n2)?(n1<n3?n1:n3):(n2<n3?n2:n3);
    printf("\nThe smallest value is:%d",smallest);
}


