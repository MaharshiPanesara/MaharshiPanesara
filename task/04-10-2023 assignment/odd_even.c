#include <stdio.h>
void main() 
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0) 
	{
        printf("even\n");
    } else 
	{
        printf("odd\n");
    }
}
