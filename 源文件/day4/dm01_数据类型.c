#include "stdlib.h"
#include "stdio.h"
#include "string.h"

typedef int (myArr)[5];

void pArr(void *p){
    for(int i = 0; i < 5; i++){
        printf("%d ",((int*)p)[i]);
    }
}

int main(){
    myArr arr1;
    int *p1;
    void *p2;
    p1 = &arr1;

    printf("size of p1: %d\n",sizeof(p1));
    printf("size of p2: %d\n",sizeof(p2));//指针型变量占8个字节

    memset(arr1, 0, sizeof(arr1));
    for(int i = 0;  i < 5; i++){
        arr1[i] = i+1;
        printf("%d ",arr1[i]);
    }

    printf("\n");
    pArr(p1);
    return 0;
}
