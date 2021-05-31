//average of 5 subjects
#include<stdio.h>
main()
{
    float m1,m2,m3,m4,m5,sum,avg;
    printf("Enter marks of individual subjects:\n");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
    sum=m1+m2+m3+m4+m5;
    avg=sum/5;
    printf("Average=%f",avg);
}
