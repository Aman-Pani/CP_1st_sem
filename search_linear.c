//linear search in array
#include<stdio.h>
main()
{
    int a[100],item,i,n,ele;
    printf("size of array:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
    printf("enter an item:");
    scanf("%d",&item);
    for(i=0;i<n;i++)
    {
        if(a[i]==item)
        {
            //return i;
            printf("%d",i+1);
            //i+1;
            break;
        }
    }
    if(i>=n)
        printf("the element is not present");
}
