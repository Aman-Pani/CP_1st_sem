#include<stdio.h>
main()
{
    int A,B,C;
    printf("Enter value of variables:\n");
    printf("A=");
    scanf("%d",&A);
    printf("B=");
    scanf("%d",&B);
    C=A; A=B; B=C;
    printf("swapped variable:\n");
    printf("A=%d\n",A);
    printf("B=%d",B);


}

