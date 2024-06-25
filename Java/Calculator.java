import java.util.Scanner;

public class Calculator {
  
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    // Prompt user for the first value
    System.out.print("Enter first number: ");
    double num1 = scanner.nextDouble();

    // Prompt the user for the operator
    System.out.print("Enter an operator (+, -, *, /): ");
    char operator = scanner.next().charAt(0);

    // Prompt the user for the second number
    System.out.print("Enter the second number: ");
    double num2 = scanner.nextDouble();
    
    double result = 0;
    boolean validOperation = true;

    // Perform the calculation based on the operator
    switch (operator) {
      case '+':
        result = num1 + num2;
	break;

      case '-':
	result = num1 - num2;

      case '*':
	result = num1 * num2;
	break;

      case '/':
	if (num2 != 0) {
	  result = num1 / num2;
	} else {
	  System.out.println("Error: Division by zero is not allowed.");
	  validOperation = false;
	}
	break;

      default:
	System.out.println("Error, Invalid operator.");
	validOperation = false;
	break;
    }

    // Display the result
    if (validOperation) {
      System.out.println("Result: " + result);
    }

    // Close the scanner object
    scanner.close();
  }
}
