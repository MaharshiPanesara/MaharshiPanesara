#include <stdio.h>
void main() 
{
  char op;
  int one, two;
  
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  
  printf("Enter two numbers: ");
  scanf("%d %d", &one , &two);

  switch (op) {
    case '+':
      printf("%d + %d = %d", one, two, one + two);
      break;
      
    case '-':
      printf("%d - %d = %d", one, two, one - two);
      break;
      
    case '*':
      printf("%d * %d = %d", one, two, one * two);
      break;
      
    case '/':
      printf("%d / %d = %d", one, two, one / two);
      break;
      
    case '%':
      printf("%d % %d = %d", one, two , one % two);
    default:
      printf("Error! operator is not correct");
  }
}