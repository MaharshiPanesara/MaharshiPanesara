#include<stdio.h>
void main() 
{
    int d;

    printf("Enter a number (1 to 7) representing a day of the week: ");
    scanf("%d", &d);

    switch (d) 
	{
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Error");
    }
}

