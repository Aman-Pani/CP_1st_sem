/*SWAP THREE NUMBERS WITHOUT USING 4TH VARIABLE*/
/*x to y, y to z, z to x*/
#include<stdio.h>
main()
{
    int x,y,z;
    printf("Before interchange:\n");
    printf("x=");
    scanf("%d",&x);
    printf("y=");
    scanf("%d",&y);
    printf("z=");
    scanf("%d",&z);
    x=x+y+z;
    y=x-(y+z);
    z=x-(y+z);
    x=x-(y+z);
    printf("After interchange:\n");
    printf("x=%d\n",x);
    printf("y=%d\n",y);
    printf("z=%d",z);
}


