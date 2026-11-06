#include <stdio.h>

float calculate(float n1, float n2, char op);

int main(void)
{
    float numb1 = 0.0;
    float numb2 = 0.0;
    float result = 0.0;
    char op;

    do
    {
        printf("Inter NUMB1: ");
        scanf("%f", &numb1);

        printf("Inter Oprator: ");
        scanf(" %c", &op);

        printf("Inter NUMB2: ");
        scanf("%f", &numb2);

        result = calculate(numb1, numb2, op);

        printf("Result: %.2f\n", result);
    } while (true);

}

float calculate(float n1, float n2, char op)
{
    float result = 0.0;

    switch (op)
    {
    case '+':
        result = n1 + n2;
        break;

    case '-':
        result = n1 - n2;
        break;

    case '*':
        result = n1 * n2;
        break;

    case '/':
        result = n1 / n2;
        break;

    default:
        printf("Error: Invalid oprator!");
        break;
    }

    return result;
}
