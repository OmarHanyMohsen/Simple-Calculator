#include <stdio.h>
#include <stdbool.h>

bool calculate(float n1, float n2, char op, float *results);

int main(void)
{
    float numb1 = 0.0;
    float numb2 = 0.0;
    float result = 0.0;
    char op;

    while (true)
    {
        printf("\nEnter Operator (+, -, *, /) or 'q' to quit: ");
        if (scanf(" %c", &op) != 1 || op == 'q' || op == 'Q')
        {
            printf("Exiting Calculator!\n");
            break;
        }

        printf("Enter NUMB1: ");
        if (scanf("%f", &numb1) != 1)
        {
            printf("Invalid number entered!\n");
            while (getchar() != '\n');
            continue;

        }

        printf("Enter NUMB2: ");
        if (scanf("%f", &numb2) != 1)
        {
            printf("Invalid number entered!\n");
            while (getchar() != '\n');
            continue;
        }

        if (calculate(numb1, numb2, op, &result))
        {
            printf("Result: %.3f\n", result);
        }
    }

    return 0;
}

bool calculate(float n1, float n2, char op, float *results)
{
    switch (op)
    {
    case '+':
        *results = n1 + n2;
        return true;

    case '-':
        *results = n1 - n2;
        return true;

    case '*':
        *results = n1 * n2;
        return true;

    case '/':
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
