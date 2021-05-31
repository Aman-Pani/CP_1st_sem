#include<stdio.h>
struct student
{
    char name[100],dept[10];
    int roll;
    float cgpa;
};
main()
{
    struct student s1;
    printf("Enter roll.no : ");
    scanf("%d",&s1.roll);

    printf("\nEnter name : ");
    scanf(" %[^\n]",s1.name);

    printf("\nEnter department : ");
    scanf(" %[^\n]",s1.dept);

    printf("\nEnter cgpa : ");
    scanf("%f",&s1.cgpa);

    printf("\nThe roll : %d",s1.roll);
    printf("\nThe name : %s",s1.name);
    printf("\nThe department : %s",s1.dept);
    printf("\nThe cgpa : %f",s1.cgpa);
}
