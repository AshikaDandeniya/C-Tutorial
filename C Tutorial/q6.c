#include <stdio.h>
#include <stdlib.h>

int main()
{
    char job_num[20];
    int level;
    float basic_pay, gross_pay, net_salary;
    int C_allowances,E_allowances;
    float tax_rate;

    printf("Enter job number:");
    scanf("%s",&job_num);

    printf("\nEnter the level number:");
    scanf("%d",&level);

    printf("\nEnter the Basic Pay:");
    scanf("%f",&basic_pay);

    if (level == 1) {
        C_allowances = 1000;
        E_allowances = 500;
    } else if (level == 2) {
        C_allowances = 750;
        E_allowances = 200;
    } else if (level == 3) {
        C_allowances = 500;
        E_allowances = 100;
    } else if (level == 4) {
        C_allowances = 250;
        E_allowances = 0;
    }

    gross_pay = 1.25*basic_pay + C_allowances + E_allowances;

    if (gross_pay < 2000){
        tax_rate = 0;
    } else if (gross_pay >= 2000 && gross_pay < 4000){
        tax_rate = 3;
    } else if (gross_pay >= 4000 && gross_pay < 6000){
        tax_rate = 5;
    } else {
        tax_rate = 8;
    }

    net_salary = gross_pay - (gross_pay*tax_rate*0.01);
    printf("Net Salary:%.2f", net_salary);

    return 0;
}
