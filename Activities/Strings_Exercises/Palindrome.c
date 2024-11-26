/*
PALINDROME (case insensitive) -ignore spaces, capital/small letters, punctuations
ignore every character that isn't alphanumeric

Example: "A man a plan a canal Panama" is a palindrome

reverse the string, then compare 
the original string to the reversed one


NOTE:
return 1 = true
return 0 = false
*/

#include<stdio.h>
#include<string.h>
#include <ctype.h>

void toLowerstr(char str[]){
    for(int x=0;str[x]!='\0';x++){
        if(isupper(str[x])){
            str[x] = tolower(str[x]);
        }
    }
}

void reverseString(char reverse[], int l){
    char temp;
    for(int x=0;x<l/2;x++){
        temp = reverse[x];
        reverse[x] = reverse[l-x-1];
        reverse[l-x-1] = temp;
    }
}

/*STUCK HERE!!!!!!!!*/

void simplifiedString(char str[]){
    int oldIndex, newIndex=0;
    //copy to new Index if oldIndex is alphanumeric
    for(oldIndex=0; str[oldIndex]!='\0';oldIndex++){
        if(isalpha(str[oldIndex]) || isdigit(str[oldIndex])){
        str[newIndex] = str[oldIndex];
        newIndex++;
    }
    }
    printf("%s", str);
}

int isPalindrome(char str[]){
    int l = strlen(str);
    char reverse[l+1]; //+1 for the null terminator
    toLowerstr(str);
    strcpy(reverse, str);
    reverseString(reverse, l);
    printf("Reversed string: %s\n", reverse);

    //NOTE: You can't change whole string to lowercase/uppercase
    // reverse = tolower(reverse);
    // str = tolower(str);
    for(int x=0; str[x]!='\0'; x++){
        if(str[x]!=reverse[x]){
            return 0;
        }
    }
    return 1;
}

int main(){
    
    char str[20], reverse[20];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")] = '\0';

    simplifiedString(str);

    // int res = isPalindrome(str);
    // printf("\n%d", res);

    // if(isPalindrome(str)){
    //     printf("%s is a palindrome", str);
    // }else{
    //     printf("%s is not a palindrome", str);
    // }
    return 0;
}