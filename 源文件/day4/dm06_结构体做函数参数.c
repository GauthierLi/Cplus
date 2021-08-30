#include "stdlib.h"
#include "stdio.h"
#include "string.h"

typedef struct teacher{
    char name[50];
    int age;
}tea;

void printData(tea t){
    printf("name : %s\n", t.name);
    printf("age : %d\n",t.age);
}

int main(){
    tea t1 = {"gauthier", 50};
    printData(t1);
    return 0;
}
