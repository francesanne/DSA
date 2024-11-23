#include <stdio.h>
#include <string.h>
#include "Calc.c"

int main(int argc, char *argv[])
{
    float n1, n2, answer;
    int op;
    char choice[5];

    do
    {
        printf("Enter first number: ");
        scanf("%f", &n1);
        printf("Enter second number: ");
        scanf("%f", &n2);

        /*
        1 - ADD, 2 - SUBTRACT
        3 - MULTIPLY, 4 - DIVIDE
        */

        printf("Enter operation: ");
        scanf("%d", &op);

        if (op == 1)
        {
            answer = addNum(n1, n2);
            printf("%.2f + %.2f = %.2f\n", n1,n2,answer);
        }
        else if (op == 2)
        {
            answer = minusNum(n1, n2);
            printf("%.2f - %.2f = %.2f\n", n1,n2,answer);
        }
        else if (op == 3)
        {
            answer = multiplyNum(n1, n2);
            printf("%.2f * %.2f = %.2f\n", n1,n2,answer);
        }
        else if (op == 4)
        {
            answer = divideNum(n1, n2);
            printf("%.2f / %.2f = %.2f\n", n1,n2,answer);
        }else{
            printf("Invalid operation.\n");
        }

        printf("Would you like to input again(Yes/No)?");
        scanf("%s", choice);
        
    }while(strcmp (choice,"yes") == 0 || strcmp (choice, "Yes") == 0);

    printf("End of program...");
}
