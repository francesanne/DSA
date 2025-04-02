#include<stdio.h>

int main(){
    int n;
    do{
        printf("Enter the height of the asterisk: ");
        scanf("%d", &n);
        if(n<4){
            printf("Value must be 4 and above.\n");
        }
        
    }while(n<4);
    
    if(n%2==0){
        n=n+1;
    }
    
    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            if(i==j||i+j==n-1||i==n/2|| j==n/2){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}