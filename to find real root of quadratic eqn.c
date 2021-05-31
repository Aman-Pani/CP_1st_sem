#include<stdio.h>
main()
{
   float A,B,C,D,discriminant,root1,root2;
   D=discriminant;
   printf("coefficient A:");
   scanf("%f",&A);
   printf("coefficient B:");
   scanf("%f",&B);
   printf("value of C:");
   scanf("%f",&C);
   D=B*B-4*A*C;
   root1=(-B+sqrt(D))/2*A;
   printf("root 1: %f\n", root1);
   root2=(-B-sqrt(D))/2*A;
   printf("root 2: %f", root2);
}
