//reverse the array
#include<stdio.h>
main()
{
    int ar[100],size,i,rev;
    printf("enter the size:");
    scanf("%d",&size);
    printf("enter the elements:");
    for(i=0;i<size;i++)
    {
       scanf("%d",&ar[i]);
    }
    printf("reverse order:\t");
    for(i=0;i<size/2;i++)
    {
        rev=ar[i];
        ar[i]=ar[size-1-i];
        ar[size-1-i]=rev;
    }
     for(i=0;i<size;i++)
        printf("%d\t",ar[i]);

}
