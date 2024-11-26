#include <stdio.h>
#include <string.h>
int main()
{
    char name[50];
    /*basic printf - ends after encountering whitespace*/
    printf("Enter string: ");
    scanf("%s", name); // scanf does not consider whitespace in string, it will automatically put a null character
    printf("%s", name);

    /*gets function - reads complete line including whitespace
    until you press a newline/enter*/
    char str[5];
    printf("\nEnter string: ");
    gets(str); // drawback: it won't check the buffer size even if you enter  a new line/ size inputted is more than the size being declared
    printf("%s", str);

    /*other way*/
    printf("Enter string: ");
    scanf("%.4s", name);    // scans 4 characters only
    printf("%10.4s", name); // prints in right shift

    // puts function - acts as printf
    char str2[20];
    printf("Enter string: ");
    fgets(str2, sizeof(str2), stdin);
    puts(str2); // automatically adds a newline compared to printf

    printf("%s", &str[2]); // starts printing the character from index 2 and so on
    // there should be ampersand (&), it won't work if it don't have
    
    
    /*fgets function - automatically adds new line 
    but can read strings with whitespaces
    */
   char str[10];
   printf("Enter string: ");
   fgets(str,sizeof(str),stdin);
   str[strcspn(str,"\n")] = '\0'  //changing newline to null character


    /* strlen - length of character excluding null but including space
    returns an unsigned int(positive integer)
    */
    int countt = 0;
    char name[20];
    printf("Enter name: ");
    gets(name);
    countt = strlen(name);
    printf("String length is: %d", countt);

    /*other way of finding string length using logic*/
    char name[50];
    printf("Enter name: ");
    gets(name);
    int count = 0, i;
    while (name[i] != '\0')
    { // while loop
        count++;
        i++;
        printf("%d", count);
    }
    for (int i = 0; name[i] != '\0'; i++)
    { // for loop
        count++;
    }
    printf("%d", count);

    /*strcat - string concatenation
    -changes null character in str1 to str2
    */
    char str1[50], str2[50];
    printf("Enter string 1: ");
    gets(str1);
    printf("Enter string 2: ");
    gets(str2);
    strcat(str1, str2);
    puts(str1);

    /*without using strcat function (own logic)*/
    char fname[50], lname[50];
    printf("Enter first name: ");
    gets(fname);
    printf("Enter last name: ");
    gets(lname);

    int l1,l2;
    l1 = strlen(fname);
    l2 = strlen(lname);

    for(int i=0; i<=l2;i++){      //chatgpt explain the logic here
        fname[l1+i] = lname[i];     // chatgpt explain the logic here
    }

    printf("Concatenated Name: %s", fname);


    /*strcmp - comparing two strings
    ASCII VALUE: 97=a, 65=A
    returns 0 = equal, 
    positive value = left > right, 
    negative value = left < right 
    */
    
    char str1[50], str2[50];
    printf("Enter string 1: ");
    gets(str1);
    printf("Enter string 2: ");
    gets(str2);
    int value = strcmp(str1, str2);
    if(value==0){
        printf("Strings are equal");
    }

    printf("%d", value);

    /*without using strcmp function, just simply logic*/
    char str1[50], str2[50];
    printf("Enter string 1: ");
    gets(str1);
    printf("Enter string 2: ");
    gets(str2);

    int l1 = strlen(str1);
    int l2 = strlen(str2);
    int flag=0;
    for(int i=0; str1[i]!='\0' || str2[i]!='\0'; i++){
        if(str1[i]!=str2[i]){
            flag=1;
            break;
        }
    }

    if(flag==0){
        printf("Strings are equal");
    }else{
        printf("Strings are not equal.");
    }



    /*reverse a string*/

    char str[50];
    char temp;
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")] = '\0';

    int length = strlen(str); //result will be excluding the null character
    // printf("length: %d", length); 
    for(int x=0; x<length/2; x++){
        temp = str[x];
        str[x] = str[length-1-x];
        str[length-1-x] = temp;
    }
    printf("%s", str);


    /*Uppercase to lowercase using own logic
    strlwr & strupr function - returns a pointer to a modified string - char *str
    ACII VALUES:
    A = 65 a = 97 (if you add 32, you'll get 97(a))
    Z = 90 z = 122 (add 32 = 122(z))
    */

    char str1[20];
    printf("Enter string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1,"\n")] = '\0';  

    //there are limitations if you use this function
    // strlwr(str1);
    // printf("%s", str1);
    
    for(int x=0;str1[x]!='\0'; x++){
        if(str1[x]>=65 && str1[x]<=90){
            str1[x] = str1[x]+32;
        }
    }
    printf("%s", str1);

    /*Lowercase to Uppercase*/

    char str[20];
    printf("\nEnter string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")] = '\0';

    for(int x=0; str[x]!='\0';x++){
        if(str[x]>=97 && str[x]<=122){
            str[x] = str[x] -32;
        }
    }

    printf("%s", str);
    


    return 0;
}
