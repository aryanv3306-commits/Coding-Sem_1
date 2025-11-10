#include <stdio.h>

int main()
{
    int operand1, operand2;
    char operator;
    
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);  // Note the space before %c

    printf("Enter two operands: ");
    scanf("%d %d", &operand1, &operand2);
    
    switch (operator)
    {
        case '+':
            printf("Addition of %d and %d is %d\n", operand1, operand2, operand1 + operand2);
            break;
        
        case '-':
            printf("Subtraction of %d and %d is %d\n", operand1, operand2, operand1 - operand2);
            break;
        
        case '*':
            printf("Multiplication of %d and %d is %d\n", operand1, operand2, operand1 * operand2);
            break;
        
        case '/':
            if (operand2 != 0)
                printf("Division of %d and %d is %.2f\n", operand1, operand2, (float)operand1 / operand2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        
        default:
            printf("The entered operator is invalid.\n");
    }
    
    return 0;
}
