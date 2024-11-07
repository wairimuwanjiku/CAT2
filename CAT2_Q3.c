#include <stdio.h>

int main() {
    float hoursWorked, hourlyWage;
    float grossPay, taxes, netPay;

    printf("Enter hours worked in a week: ");
    scanf("%f", &hoursWorked);
    printf("Enter hourly wage: ");
    scanf("%f", &hourlyWage);

    if (hoursWorked > 40) {
        float regularHours = 40;
        float overtimeHours = hoursWorked - 40;
        grossPay = (regularHours * hourlyWage) + (overtimeHours * hourlyWage * 1.5);
    } else {
        grossPay = hoursWorked * hourlyWage;
    }

    if (grossPay <= 600) {
        taxes = grossPay * 0.15;
    } else {
        taxes = (600 * 0.15) + ((grossPay - 600) * 0.20);
    }

    netPay = grossPay - taxes;

    printf("\nGross Pay: $%.2f\n", grossPay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", netPay);

    return 0;
}