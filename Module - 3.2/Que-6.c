#include<stdio.h>
void main() 
{
    int i, n, f=1;
    
    printf("Enter a number: ");
    scanf("%d",&n);
    
    if (n<0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    else 
    {
        for (i=1; i<=n;i++) 
        {
    		f = f * i;
        }
        printf("The factorial of %d is: %d\n", n, f);
    }
}
