#include <stdio.h>
//declaration of struct variables with tag
struct Phone{
    char *processor;
    char *graphics;
    int ram;
    int storage;
    int battery;
};
struct Phone phone1, phone2;

//declaring variables directly without tag
struct Person{
    char *name;
    int age;
}person1, person2;


typedef struct Car{
    char *brand;
    char *color;
    float price;
}Car;

Car car1, car2;
struct Car car3;

typedef struct{
    char *name;
    char *type;
    int age;
}Animal;

struct Animal cat, dog;
Animal mouse; 



