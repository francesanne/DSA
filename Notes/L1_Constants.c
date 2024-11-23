/*CONSTANTS*/
#include <stdio.h>
#define PI 3.14 //defining constant

int main(){
    const int NUM = 1;  //one way of defining constants in a code
    printf("%d\n", NUM);
//    NUM = 2;  ---------not possible to reassign NUM since you already use the keyword "const"

    printf("%c\n",'C'); //other way
    printf("%s\n", "Hello World!");

    return 0;
}