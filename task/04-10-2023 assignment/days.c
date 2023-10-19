#include <stdio.h>
int main() 
{
    int days;
    printf("Enter the number of days: ");
    scanf("%d", &days);

    int years = days / 365;
    int months = (days % 365) / 30;
    int weeks = (days % 365 % 30) / 7;
    int remainingDays = days % 365 % 30 % 7;

    printf("Years: %d\n", years);
    printf("Months: %d\n", months);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", remainingDays);

    return 0;
}
