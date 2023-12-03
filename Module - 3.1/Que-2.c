#include <stdio.h>
void main()
{
	char ch;
	int a, b;

		printf("Enter an operator (+, -, *, /) ");
		scanf(" %c", &ch);

		printf("Enter two first and second operand: ");
		scanf("%d %d", &a, &b);

		switch (ch) {

		case '+':
			printf("%d + %d = %d\n", a, b, a + b);
			break;

		case '-':
			printf("%d - %d = %d\n", a, b, a - b);
			break;

		case '*':
			printf("%d * %d = %d\n", a, b, a * b);
			break;

		case '/':
			printf("%d / %d = %d\n", a, b, a / b);
			break;

		default:
			printf("Error! please write a valid operator\n");
	}
}
