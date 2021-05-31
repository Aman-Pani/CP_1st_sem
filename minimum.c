//minimum element in an array
#include<stdio.h>
main()
{
    int a[100],min,i,size,loc=1;
    printf("enter the size:");
    scanf("%d",&size);
    printf("enter the element:");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);
    min=a[0];
    for(i=1;i<size;i++)
    {
        if(a[i]<min)
           {
            min=a[i];
            loc=i+1;
           }
           //loc==i+1;     //this shows location 1 always
    }
    printf("The minimum element is=%d\n",min);

    printf("The location of element is=%d",loc);
}
