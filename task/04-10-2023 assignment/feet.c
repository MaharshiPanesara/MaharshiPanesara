#include <stdio.h>
int main() 
{
    float meters, feet;

    printf("Enter length in meters: ");
    scanf("%f", &meters);

    
    feet = meters * 3.28084;

    printf("Length in feet: %.2f\n", feet);

    return 0;
}
