#include<stdio.h>  
void main()  
{  
    int i, a, s=0;
	  
    printf("Enter any number: ");  
    scanf("%d", &a);
	  
    for(i=2; i<=a; i+=2)  
    {  
        s += i;  
    }  
    printf("Sum of even numbers =  %d", s);  
}  
