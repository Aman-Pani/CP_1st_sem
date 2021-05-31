//find the minimum, maximum and average of an array
#include<stdio.h>
main()
{
    int a[10],s,i,max,min,sum=0;
    float avg;
    printf("Size of array:");
    scanf("%d",&s);
    printf("Enter the array:");
    for(i=0;i<s;i++)
        scanf("%d",&a[i]);
    max=min=a[0];
    for(i=0;i<s;i++)
    {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
        sum=sum+a[i];
        avg=1.0*sum/s;
    }
    //avg=1.0*sum/s;
    printf("Max element:%d\n",max);
    printf("Mini element:%d\n",min);
    printf("Average of array:%f\n",avg);
}
