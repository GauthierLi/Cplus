#include "stdlib.h"
#include "stdio.h"
#include "string.h"

void printArr(char ** myArr, int num){
    for(int i = 0; i < num; i++){
        printf("%s \n", myArr[i]);
    }
}

void sortArr(char **myArr, int num){
    char* tempchar = NULL;
    //char* tempchar = (char*)malloc(sizeof(char)*30);
    //排序
    for(int i = 0; i < num; i++){
        for(int j = i+1; j<num;j++){
            if(strcmp(myArr[i], myArr[j]) < 0){
                tempchar = myArr[i];
                myArr[i] = myArr[j];
                myArr[j] = tempchar;
            }
        }
    }
}

int main(){
    char **p1 = NULL;
    int num = 5;
    p1 = (char**)malloc(sizeof(char*) * num);
    for(int i = 0; i < 5; i++){
        p1[i] = (char*)malloc(sizeof(char)*30);
        sprintf(p1[i], "%d%d%d",i+1,i+1,i+1);
    }

    printf("before sort:\n");
    printArr(p1, num);

    sortArr(p1, num);

    printf("after sort:\n");
    printArr(p1, num);

    //释放内存，先进后出
    for(int i = 0; i < num; i++){
        if(p1[i] != NULL){
            free(p1[i]);
            p1[i] = NULL;
        }
    }

    if(p1 != NULL){
        free(p1);
        p1 = NULL;
    }
    return 0;
}

