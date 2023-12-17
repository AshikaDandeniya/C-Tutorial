#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[30];
    float mass;
    float height;
    float bmi_value;

    printf("Enter the Name of the citizen:");
    scanf("%s",name);
    printf("Enter the mass of citizen(in Kg):");
    scanf("%f",&mass);
    printf("Enter the height of the citizen(in m):");
    scanf("%f",&height);

    bmi_value = mass / (height*height);

    printf("BMI Value = %.2f",bmi_value);

    if(bmi_value < 18.5)
        {
          printf("\nRisk of developing problems such as nutritional deficiency and osteoporosis ");
        }
    else if ((bmi_value < 23) && (bmi_value > 18.5))
    {
        printf("\nLow Risk (healthy range)");
    }
    else if ((bmi_value < 27.5) && (bmi_value  > 23))
    {
        printf("\nModerate risk of developing heart disease, high blood pressure, stroke,diabetes");
    }
    else
    {
        printf("\nHigh risk of developing heart disease, high blood pressure, stroke, diabetes");
    }

    return 0;
}
