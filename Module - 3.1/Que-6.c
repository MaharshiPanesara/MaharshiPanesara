#include <stdio.h>
void main()
{
    int y,c,d;

    printf("1. Years to Days  :\n");
    printf("2. Days to Years  :\n");
    printf("Enter your choice (1 or 2)  : ");
    scanf("%d", &c);

    switch (c) 
    {
        case 1:
            printf("Enter the number of years: ");
            scanf("%d", &y);

            d = y*365;
            printf("%d years %d days.\n",y,d);
            break;

        case 2:
            printf("Enter the number of days: ");
            scanf("%d", &d);

            y = d/365;
            printf("%d days = %d years.\n",d,y);
            break;

        default:
            printf("Error\n");
            break;
    }
}
