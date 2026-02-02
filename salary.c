#include <stdio.h>

int main() {
    char na[20];
    int bs;
    float da,sa,gs;
    printf("Enter name of an employee and base salary:\n");
    scanf("%s %d", na, &bs);
    if (bs<=10000)
        da=0.1*bs;
    else if (bs>10000 && bs<=20000)
        da=0.12*bs;
    else if(bs>20000 && bs<=30000)
        da=0.15*bs;
    else if(bs>30000)
        da=0.2*bs;
        if (bs<=10000)
        sa=0.05*bs;
        else if (bs>10000 && bs<=20000)
        sa=0.08*bs;
        else if(bs>20000 && bs<=30000)
        sa=0.1*bs;
        else if(bs>30000)
        sa=0.12*bs;
        gs=bs+da+sa;
        printf("*******************************\n");
        printf("Employee Name: %s\n", na);
        printf("Base Salary: %d\n", bs);
        printf("Dearness Allowance: %.2f\n", da);   
        printf("Salary Allowance: %.2f\n", sa);
        printf("Gross Salary: %.2f\n", gs);
        printf("*******************************\n");

    return 0;
}