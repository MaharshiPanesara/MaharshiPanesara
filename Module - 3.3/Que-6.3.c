#include <stdio.h>
void main() 
{
  char str[50];
  int i, length = 0;

  printf("Enter a string: ");
  gets(str);

  for (i = 0; str[i] != '\0'; i++) 
  {
    length++;
  }
  printf("Length of string: %d", length);
}
