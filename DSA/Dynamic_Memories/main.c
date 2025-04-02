#include <stdio.h>
#include <stdlib.h>
typedef char *String, *charPtr, letter;
String createString(int len);


int main(){

    letter c;
    scanf(" %c", &c);
    printf("You entered: %c\n", c);

    String str = "Sample Text"; //static string
    printf("Str: %s\n", str);
    //fflush(stdout);  - force flushing the output buffer

    String str2 = createString(50); //why

    str2[0] = 'H';
    str2[1] = 'e';
    str2[2] = 'l';
    str2[3] = 'l';
    str2[4] = 'o';
    str2[5] = '\n';
    printf("Str: %s\n", str2);

    return 0;
}

String createString(int len){
    String newString = (String)malloc(50*sizeof(letter));
    return newString;
}