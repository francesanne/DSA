#include <stdio.h>
#include <stdlib.h>

typedef int *IntArr;

int main(){
    int size =3;
    int i, input, n=0;
    IntArr arr = (IntArr)malloc(size*sizeof(int)); //int because elements in array are int

    do{
  
        printf("Content: ");
        for(i=0;i<n;i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
        printf("Array Status: %d / %d\n", n,size);
        printf("Enter item: ");
        scanf("%d", &input);


        if(n==size){
            size*=1.5;
            arr = (IntArr)realloc(arr,size*sizeof(int));
        }
        arr[n++]=input;


    }while(input>0);

    free(arr);
    arr=NULL;

    return 0;
}