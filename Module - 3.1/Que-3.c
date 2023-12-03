#include<stdio.h>
void main() 
{
    float radius, length, width, base, height,rectangle,triangle;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
    
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);
    
    radius=3.14* radius * radius;
	rectangle=length*width;
	triangle=0.5*base*height;
	
    printf("\nArea of the circle: %f\n",radius);
    
    printf("Area of the rectangle: %f\n", rectangle);
    
    printf("Area of the triangle: %f\n", triangle);
}

