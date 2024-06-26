#include <stdio.h>
#include <stdlib.h>

/**
 * add - prints the addition of two numbers
 * @a: first number
 * @b: second number
 */
void add(double a, double b)
{
	printf("Result: %.2lf\n", a + b);
}

/**
 * subtract - prints the subtraction of two numbers
 * @a: first number
 * @b: second number
 */
void subtract(double a, double b)
{
	printf("Result: %.2lf\n", a - b);
}

/**
 * multiply - prints the multiplication of two numbers
 * @a: first number
 * @b: second number
 */
void multiply(double a, double b)
{
	printf("Result: %.2lf\n", a * b);
}

/**
 * divide - prints the division of two numbers to STDOUT
 * @a: first number
 * @b: second number
 */
void divide(double a, double b)
{
	if (b == 0)
		printf("Error: Division by zero is not allowed.\n");
	else
		printf("Result: %.2lf\n", a / b);
}


/**
 * main - Entry point
 * Return: Always zero
 */
int main(void)
{
	double num1, num2;
	char operation;

	printf("Enter first number: ");
	if (scanf("%lf", &num1) != 1)
	{
		printf("Invalid input. Please enter a number.\n");
		return (1);
	}

	printf("Enter an operation (+, -, *, /): ");
	scanf(" %c", &operation);

	printf("Enter second number: ");
	if (scanf("%lf", &num2) != 1)
	{
		printf("Invalid input. Please enter a number.\n");
		return (1);
	}

	switch (operation)
	{
		case '+':
			add(num1, num2);
			break;

		case '-':
			subtract(num1, num2);
			break;

		case '*':
			multiply(num1, num2);
			break;

		case '/':
			divide(num1, num2);
			break;

		default:
			printf("Error: Invalid operation.\n");
			return (1);
	}

	return (0);
}
