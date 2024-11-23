#include <stdio.h>
#include "Activity3.c"

int main(){

    int x,y,choice,skip, position, result;
    char ch[20];

    printf("=====MENU=====\n");
    printf("[1] Factorial A\n[2] Factorial B\n[3] Summation A\n");
    printf("[4] Summation B\n [5]Skip Count by X to Y\n [6] Total Consonants\n [7]Exit\n\n");

    do{
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Enter x: ");
                scanf("%d", &x);
                result = factorialA(x);
                printf("Result = %d", result);
                break;
            case 2: 
                printf("Enter x: ");
                scanf("%d", &x);
                printf("Enter y: ");
                scanf("%d", &y);
                result = factorialB(x,y);
                printf("Result: %d", result);
                break;
            case 3: 
                printf("Enter x: ");
                scanf("%d", &x);
                result = summationA(x);
                printf("Result = %d", result);
                break;
            case 4: 
                printf("Enter x: ");
                scanf("%d", &x);
                printf("Enter y: ");
                scanf("%d", &y);
                result = summationB(x,y);
                printf("Result: %d", result);
                break;
            case 5:
                printf("Enter x: ");
                scanf("%d", &x);
                printf("Enter y: ");
                scanf("%d", &y);
                printf("Enter skip: ");
                scanf("%d", &skip);
                skipCountbyXtoY(x,y,skip);
                break;
            case 6:
                printf("Enter a string: ");
                scanf(" %s", ch);
                result = totalconsonants(ch, 0);
                break;
            default:
                printf("Invalid choice. Please try again!\n\n");
        }
    }while(choice != 7);

    return 0;
}