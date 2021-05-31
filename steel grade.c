//Grading the Quality of Steel
#include<stdio.h>
main()
{
    float har,car,tens;
    printf("Enter the Hardness of Steel:");
    scanf("%f",&har);
    printf("Enter the Carbon Content of Steel:");
    scanf("%f",&car);
    printf("Enter the Tensile Strength of Steel:");
    scanf("%f",&tens);

        if ((har>50)&&(car<0.7)&&(tens>5600))
        {
            printf("GRADE 10");
        }
        else if ((har>50)&&(car<0.7))
        {
            printf("GRADE 9");
        }
        else if ((car<0.7)&&(tens>5600))
        {
            printf("GRADE 8");
        }
        else if ((har>50)&&(tens>5600))
        {
            printf("GRADE 7");
        }
        else if ((har>50)||(car<0.7)||(tens>5600))
        {
            printf("GRADE 6");
        }
        else
        {
            printf("GRADE 5");
        }
}
