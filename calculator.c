#include <stdio.h>

int add(int num1, int num2);
int sub(int num1, int num2);

int main() {
    printf("Welcome to Kushal's Calculator\n");
    int choice, num1, num2, result;

    do {
        printf("\nMenu:\n");
        printf("1: Addition\n");
        printf("2: Subtraction\n");
        printf("3: Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1 || choice == 2) {
            printf("Enter first number: ");
            scanf("%d", &num1);
            printf("Enter second number: ");
            scanf("%d", &num2);
        }

        switch (choice) {
            case 1:
                result = add(num1, num2);
                printf("Result: %d\n", result);
                break;
            case 2:
                result = sub(num1, num2);
                printf("Result: %d\n", result);
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice, please try again.\n");
        }
    } while (choice != 3);

    return 0;
}

int add(int num1, int num2) {
    return num1 + num2;
}

int sub(int num1, int num2) {
    return num1 - num2;
}
