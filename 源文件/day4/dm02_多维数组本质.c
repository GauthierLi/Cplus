#include "stdlib.h"
#include "stdio.h"
#include "string.h"

void PArr(int (*p1)[5][5]){
    /*
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d ",p1[i][j]);
        }
        printf("\n");
    }
    */
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            for(int k = 0; k < 5; k++){
                p1[i][j][k] = 1000 * (i + 1) + 100 * (j + 1) + 10*(k + 1);
            }
        }
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
                printf("(%d,%d,%d,%d,%d)",p1[i][j][0],p1[i][j][1],p1[i][j][2],p1[i][j][3],p1[i][j][4]);
        }
        printf("\n");
    }
}

//一维数组类型
int main21(){
    typedef int (*OneDArrType)[5];
    OneDArrType p1 = NULL;
    int p2[5] = {1,2,3,4,5};
    p1 = &p2;

    for(int i = 0;i < 5; i++){
        printf("%d ",(*p1)[i]);
    }
    return 0;
}

//指针数组变量
int main22(){
    char *p1[] = {"a", "dog","like", "a", "cat"};
    for(int i = 0; i < 5;i++){
        printf("%s ",p1[i]);
    }
    return 0;
}

//数组指针变量
int main23(){
    typedef int(myArr)[5];
    int a[5] = {11,12,13,14,15};
    myArr *p1;
    p1 = &a;
    for(int i = 0; i < 5; i++){
        printf("%d ",(*p1)[i]);
    }
    printf("\n");
    return 0;
}


