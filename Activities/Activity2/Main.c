#include <stdio.h>
#include "Second-Activity.c"

int main(){

    int choice, result, num;
    char ch;

    do{
        printf("=====MENU=====\n");
        printf("1.Check if a number is not greater than 13.\n");
        printf("2. Check if a number is divisible by 3 but not divisible by 7\n");
        printf("3. Check if a number belongs to the pattern (1,5,9,13,17,25,29,33,...)\n");
        printf("4. Check if a character is a hexadecimal character.\n");
        printf("5. Check if a character is vowel, consonant, or number.\n");
        printf("6. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){

            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                result = checkGreater(num);
                if(result == 1){
                    printf("%d is not greater than 13.\n\n", num);
                }else{
                    printf("%d is greater than 13.\n\n", num);
                }
                break;

            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);
                result = checkDivisible(num);
                if(result == 1){
                    printf("%d is divisible by 3 but not divisible by 7.\n\n", num);
                }else{
                    printf("%d is neither divisible by 3 or by 7.\n\n", num);
                }
                break;
            case 3:
                printf("Enter a number: ");
                scanf("%d", &num);
                result = checkPattern(num);
                if(result==1){
                    printf("%d belongs to the pattern.\n\n", num);
                }else{
                    printf("%d do not belong to the pattern.\n\n", num);
                }
                break;
            case 4: 
                printf("Enter a character: ");
                scanf(" %c", &ch);
                result = checkHexadecimal(ch);
                  if(result==1){
                    printf("%c is a hexadecimal character.\n\n", ch);
                  }else{
                    printf("%c is not a hexadecimal character.\n\n", ch);
                  }
                break;
            case 5:
                printf("Enter a character: ");
                scanf(" %c", &ch);
                result = checkCharacter(ch);
                if(ch==1){
                    printf("%c is a number.\n\n", ch);
                }else if(ch==2){
                    printf("%c is vowel.\n\n", ch);
                }else if(ch==3){
                    printf("%c is consonant.\n\n", ch);
                }else{
                    printf("%c is a special character.\n\n", ch);
                }
                break;
            default:
                printf("Invalid choice. Please input another number.\n\n");
        }

    }while(choice!=6);


    return 0;
}