/*
TYPES OF RECURSION
1. DIRECT


2. INDIRECT - when a function calls in circular motion 
EX: 
fun1(){
fun2();         //fun1 calls fun2
}

fun2(){
    fun1();     //then, fun2 calls fun1
}

3. TAILED - recursive function is the last line of code in a function
4. NON-TAILED - 
*/


#include <stdio.h>
//Recursion - when a function calls itself
void display(int);
int sum(int);
int fun1(int);
int fun2(int);
void print(int);

int main(){
    int n, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    display(n); //1 direct

    printf("Enter a number: ");
    scanf("%d", &n);
    result = sum(n); //2 direct
    printf("%d", result);

    printf("Enter a number: ");
    scanf("%d", &n);
    result = fun1(n); //3 indirect
    printf("%d", result);

    print(n); //4 tailed

    return 0;
}

void display(int n){
    if(n<1){
        return;
    }else{
        printf("%d\n", n);
        display(n-1); 
        printf("%d\n",n); //this will only execute once all the recursive functions are called
    }  
}     

int sum(int n){
    if(n==1){
        return n;
    }
    return n + sum(n-1);
}              

int fun1(int n){
    if(n<=1){
        return 1;
    }else{
        return n*fun2(n-1);
    }
}

int fun2(int n){
    if(n<=1){
        return 1;
    }else{
        return n*fun1(n-1);
    }
}

void print(int n){
    if(n<1){
        return;
    } 
    printf("%d", n);
    print(n/2);

}



/*
FLOW OF FUN1 & FUN2 EXAMPLE (INDIRECT)
n=5
fun1(5) -> 5*fun2(4)  -> 4*fun1(3) 
-> 3*fun2(2)  -> 2*fun1(1) -> return 1

//return 1 will loop back to fun1(1) = 1 -> 1*2 =2
2 will goo back to fun2(2).. 3*2=6, g will go back to fun1(3)... 6*3 = 24
24 = fun2(4)... 24*4 = 120
120 = fun1(5)

HENCE, THE ANSWER IS 120

*/

//ADITIONAL NOTE: MOVE BACKWARD, THE SAME PATH YOU TAKE WHILE GOING FORWARD