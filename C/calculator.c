#include <stdio.h>
#include <stdlib.h>
#include "calculator.h"

/**
 * add - prints the addition of two numbers
 * @a: first number
 * @b: second number
 * Returns: a + b
 */
double add(double a, double b)
{
	return a + b;
}

/**
 * subtract - prints the subtraction of two numbers
 * @a: first number
 * @b: second number
 * Returns: a - b
 */
double subtract(double a, double b)
{
	return a - b;
}

/**
 * multiply - prints the multiplication of two numbers
 * @a: first number
 * @b: second number
 * Returns: a * b
 */
double multiply(double a, double b)
{
	return a * b;
}

/**
 * divide - prints the division of two numbers to STDOUT
 * @a: first number
 * @b: second number
 * Returns: a / b if b != 0 else -1
 */
double divide(double a, double b)
{
	if (b == 0)
		return -1;
	else
		return a / b;
}


/**
 * main - Entry point
 * Return: Always zero

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
*/
