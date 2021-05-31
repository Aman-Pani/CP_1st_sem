//linear search in array
#include<stdio.h>
main()
{
    int a[100],item,i,n,ele,p=0;
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
            p=i+1;
            printf("the position is:",p);
            break;
        }
    }
    if(p==0)
        printf("the element is not present");
        else
            printf("%d",p);
}
