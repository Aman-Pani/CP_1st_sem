//update particular location of an array with a given value
#include<stdio.h>
main()
{
    int siz,a[100],i,ele,pos;
    printf("Enter size of array:");
    scanf("%d",&siz);
    printf("Enter the elements:\n");
    for(i=0;i<siz;i++)
        scanf("%d",&a[i]);
    printf("Enter new element and position:");
    scanf("%d%d",&ele,&pos);
    a[pos-1]=ele;
    printf("The new array is:\n");
    for(i=0;i<siz;i++)
        printf("%d\t",a[i]);
}

