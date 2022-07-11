#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("======== Simple Calculator ========\n\n");

    char ope;
    double first, second, ans;

    printf("Enter an operator (+,-,/,*) : ");
    scanf("%c", &ope);
    printf("Enter two operands (12,48) : ");
    scanf("%lf,%lf", &first, &second);

    switch (ope){
        case '+':
            printf("\n===================================\n\n");
            printf("%.2lf + %.2lf = %.2lf", first, second, first + second);
            printf("\n\n===================================\n");
            break;
        case '-':
            printf("\n===================================\n\n");
            printf("%.2lf - %.2lf = %.2lf", first, second, first - second);
            printf("\n\n===================================\n");
            break;
        case '/':
            printf("\n===================================\n\n");
            printf("%.2lf / %.2lf = %.2lf", first, second, first / second);
            printf("\n\n===================================\n");
            break;
        case '*':
            printf("\n===================================\n\n");
            printf("%.2lf * %.2lf = %.2lf", first, second, first * second);
            printf("\n\n===================================\n");
            break;
        default:
            printf("\n===================================\n\n");
            printf("Invalid Input!");
            printf("\n\n===================================\n");
    }
    return 0;
}
