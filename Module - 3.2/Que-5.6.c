#include<stdio.h>
void main()
{
    int i, b, s=0;

    printf("Enter any number: ");
    scanf("%d", &b);
    
    for(i=1; i<=b; i+=2)
    {
        s += i;
    }
    printf("Sum of odd numbers = %d", s);
}
