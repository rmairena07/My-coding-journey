#include <stdio.h>

int main()
{
    int hoursWorked;
    int netSalary;
    int extraHours;
    int basePay;
    int extraPay;
    int taxes;
    int totalSalary;

    printf("Enter the number of hours you've worked: \n");
    scanf("%d", &hoursWorked);

    if (hoursWorked > 40)
    {
        extraHours = hoursWorked - 40;
        basePay= (hoursWorked - extraHours) * 12;
        extraPay= extraHours * 18;
        netSalary = basePay + extraPay;
        //printf("Extra hours: %d\nBasePay: %d\nExtrapay: %d\nNetSalary: %d\n", extraHours, basePay, extraPay, NetSalary);
    }
    else if (hoursWorked <= 40)
    {
        netSalary = hoursWorked * 12;
        //printf("Net Salary is: %d\n", NetSalary);
    }
    else
    {
        //printf("Wrong input entered.");
    }

    if (netSalary <= 300)
    {
        taxes = netSalary * 0.15;
        totalSalary = netSalary - taxes;
    }
    else if(netSalary <= 450)
    {
        taxes = 300 * 0.15 + (netSalary - 300) * 0.20;
        totalSalary = netSalary - taxes;
    }
    else if(netSalary >450)
    {
        taxes =  300 * 0.15 + 150 *0.20 + (netSalary -450) *0.25;
        totalSalary = netSalary - taxes;
    }

    printf("Total salary is: %d\n", totalSalary);
    printf("Taxes are: %d\n", taxes);

    return 0;
}