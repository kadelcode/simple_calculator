# A module containing the code logic

def add(x, y):
    """
    This function computes the addition of two numbers.

    Args:
        x: first number
        y: second number

    Returns:
        The addition of the two numbers.

    """
    return x + y

def subtract(x, y):
    """
    This function computes the subtraction of two numbers.

    Args:
        x: first operand
        y: second operand

    Returns:
        The subtraction of the two operands

    """
    return x - y

def multiply(x, y):
    """
    This function computes the multiplication of two operands.

    Args:
        x: first operand
        y: second operand

    Returns:
        The multiplication of the two numbers

    """
    return x * y

def divide(x, y):
    """
    Computes the division of two numbers

    Args:
        x: first number
        y: second number

    Returns:
        The division of the numbers
    """
    
    # if the denominator is zero(0)
    if y == 0:
        return "Error! Division by zero."
    else:
        return x / y

def calculator():
    """
    This the main function the allows a user
    perform the calculator's basic operation.
    """

    print("Select operation:")
    print("A: Addition")
    print("S: Subtraction")
    print("M: Multiplication")
    print("D: Division")

    # user's operation input
    choice = input("Enter choice (A/S/M/D): ")

    if choice in ['A', 'S', 'M', 'D']:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))

        if choice == 'A':
            print(f"{num1} + {num2} = {add(num1, num2)}")

        if choice == 'S':
            print(f"{num1} - {num2} = {sub(num1, num2)}")

        if choice == 'M':
            print(f"{num1} * {num2} = {mul(num1, num2)}")

        if choice == 'D':
            print(f"{num1} / {num2} = {div(num1, num2)}")

    else:
        print("Invalid Input")

if __name__ == "__main__":
    calculator()
