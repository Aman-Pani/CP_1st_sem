//validity of triangle
#include<stdio.h>
main()
{
    float a,b,c;
    printf("enter sides of triangle:\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a+b>c&&b+c>a&&a+c>b)
    {
        printf("triangle is valid \n");
        if(a==b&&b==c)

            printf("triangle is equilateral");

        else if(a==b&&b!=c||b==c&&b!=a||a==c&&c!=b)

            printf("triangle is isosceles");

        else if((a*a+b*b)==c*c||(c*c+b*b)==a*a||(c*c+a*a)==b*b)

             printf("right angle triangle");

        else if(a!=b&&b!=c&&c!=a)

            printf("triangle is scalene");

    }
        else

        printf("triangle is not valid");


}




