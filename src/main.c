#include <stdio.h>
#include <stdbool.h>

bool calculate(double n1, double n2, char op, double *results);
void remove_trails(void);

int main(void)
{
    printf("\n=================================\n");
    printf("|       SIMPLE CALCULATOR       |\n");
    printf("=================================\n");
    printf("|Enter '+' for Addition         |\n");
    printf("|Enter '-' for Subtraction      |\n");
    printf("|Enter '*' for Multiplication   |\n");
    printf("|Enter '/' for Division         |\n");
    printf("|Enter 'q' to Quit              |\n");
    printf("=================================\n");

    double numb1 = 0.0, numb2 = 0.0, result = 0.0;
    char op;

    while (true)
    {
        printf("\nEnter Operator: ");
        if (scanf(" %c", &op) != 1 || op == 'q' || op == 'Q')
        {
            printf("\n=================================\n");
            printf("|       Exiting Calculator      |\n");
            printf("=================================\n");
            break;
        }
        remove_trails();

        if (op != '+' && op != '-' && op != '*' && op != '/')
        {
            printf("Error: Invalid Operator!\n");
            continue;
        }

        printf("Enter NUMB1: ");
        if (scanf("%lf", &numb1) != 1)
        {
            printf("Invalid number entered!\n");
            remove_trails();
            continue;

        }
        remove_trails();

        printf("Enter NUMB2: ");
        if (scanf("%lf", &numb2) != 1)
        {
            printf("Invalid number entered!\n");
            remove_trails();
            continue;
        }
        remove_trails();

        if (calculate(numb1, numb2, op, &result))
        {
            printf("Result: %.3lf\n", result);
        }
    }

    return 0;
}

// It handels removing the new line trails from the scanf functions.
void remove_trails(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// The function that handles the calculations.
bool calculate(double n1, double n2, char op, double *results)
{
    switch (op)
    {
    // Addition case.
    case '+':
        *results = n1 + n2;
        return true;

    // Subtraction case.
    case '-':
        *results = n1 - n2;
        return true;

    // Multiplication case.
    case '*':
        *results = n1 * n2;
        return true;

    // Division case.
    case '/':
        // If the user try to divide by zero it doesn't allow it.
        if (n2 == 0)
        {
            printf("Error: You can't divide by zero!\n");
            return false;
        }

        *results = n1 / n2;
        return true;

    default:
        printf("Error: Invalid operator!\n");
        return false;
    }
}
