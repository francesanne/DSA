#include "Second-Activity.h"

int checkGreater(int num){
    if(num < 13){
        return 1;
    }
    return 0;
}
int checkDivisible(int num){
    if(num%3==0 && num%7!=0){
        return 1;
    }
    return 0;
}
int checkPattern(int num){
    if((num-1)%4==0){
        return 1;
    }
    return 0;
}
int checkHexadecimal(char ch){
    if ((ch>='0' && ch <='9') || (ch>='A' && ch<='F') || (ch>='a' && ch<='f')){
        return 1;
    }
    return 0;
}
int checkCharacter(char ch){
    if(ch>='0' && ch<='9'){
        return 1;
    }else if(ch=='A' || ch=='E' || ch=='I' || ch == 'O' || ch=='U'){
        return 2;
    }else if(ch>='A' && ch<='Z'){
        return 3;
    }
    return 0;
    }
