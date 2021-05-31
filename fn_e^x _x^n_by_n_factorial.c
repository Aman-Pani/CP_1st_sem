//e^x = 1+ x + x^2/2! +x^3/3! …..x^n/n!
#include<stdio.h>
#include<math.h>
float ePx(int,int);
int main()
{
    int t,x;
    printf("Enter x & the number of terms : ");
    scanf("%d%d",&x,&t);
    printf("e^x is : %f",ePx(x,t));
    return 0;
}

float ePx(int a,int b)
{
    int i;
    float fact=1,ser=1;
    for(i=1;i<b;i++)
    {
        fact=fact*i;
        ser=ser+(pow(a,i)/fact);
    }
    return ser;
}
