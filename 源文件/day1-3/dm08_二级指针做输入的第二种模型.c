#include "stdlib.h"
#include "stdio.h"
#include "string.h"

void printArr(char myArr[][30], int num){
    for(int i = 0; i < num; i++){
        printf("%s \n",myArr[i]);
    }
    printf("\n");
}

void sortArr(char myArr[][30], int num){
    char tempBuf[30];
    for(int i = 0; i < num; i++){
        for(int j = i+1; j < num; j++){
            if(strcmp(myArr[i],myArr[j]) > 0){
                strcpy(tempBuf, myArr[i]);
                strcpy(myArr[i], myArr[j]);
                strcpy(myArr[j], tempBuf);
            }
        }
    }
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

//交换的是内存块
int main(){
    int num = 5;
    int a1 = 5, a2 = 6;
    swap(&a1,&a2);
    printf("a1:%d  a2:%d\n",a1,a2);

    char myArr[10][30] = {"aaaa","ddddd","bbbbb", "cccc","1111"};
    printf("before sort: \n");
    printArr(myArr,5);

    sortArr(myArr,num);

    printf("after sort: \n");
    printArr(myArr,5);
    return 0;
}


