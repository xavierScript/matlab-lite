#include <stdio.h>
#include <math.h>

// Function declarations
void showMenu();
void handleTwoOperandOperations();
void handleTrigOperations();

int main() {
    int choice;

    // Display the main menu
    while (1) {
        showMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                handleTwoOperandOperations();
                break;
            case 2:
                handleTrigOperations();
                break;
            case 3:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice, please try again.\n");
        }
    }
    return 0;
}

void showMenu() {
    printf("\n--- MATLAB Lite ---\n");
    printf("1. Two Operand Operations (Add, Subtract, Multiply, Divide)\n");
    printf("2. Trigonometric Functions (sin, cos, tan, cot, sec, csc)\n");
    printf("3. Exit\n");
}

// Handle basic two operand operations
void handleTwoOperandOperations() {
    int operation;
    double num1, num2, result;

    printf("\nSelect Operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &operation);

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (operation) {
        case 1:
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operation choice.\n");
    }
}

// Handle trigonometric operations
void handleTrigOperations() {
    int operation;
    double degrees, radians, result;

    printf("\nSelect Operation:\n");
    printf("1. sin(x)\n");
    printf("2. cos(x)\n");
    printf("3. tan(x)\n");
    printf("4. cot(x) [1/tan(x)]\n");
    printf("5. sec(x) [1/cos(x)]\n");
    printf("6. csc(x) [1/sin(x)]\n");
    printf("Enter your choice: ");
    scanf("%d", &operation);

    printf("Enter the angle in degrees: ");
    scanf("%lf", &degrees);

    // Convert degrees to radians
    radians = degrees * (M_PI / 180.0);

    switch (operation) {
        case 1:
            result = sin(radians);
            printf("Result: %.2lf\n", result);
            break;
        case 2:
            result = cos(radians);
            printf("Result: %.2lf\n", result);
            break;
        case 3:
            result = tan(radians);
            printf("Result: %.2lf\n", result);
            break;
        case 4:
            if (tan(radians) != 0) {
                result = 1 / tan(radians);
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: cotangent is undefined for this value.\n");
            }
            break;
        case 5:
            if (cos(radians) != 0) {
                result = 1 / cos(radians);
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: secant is undefined for this value.\n");
            }
            break;
        case 6:
            if (sin(radians) != 0) {
                result = 1 / sin(radians);
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: cosecant is undefined for this value.\n");
            }
            break;
        default:
            printf("Invalid operation choice.\n");
    }
}
