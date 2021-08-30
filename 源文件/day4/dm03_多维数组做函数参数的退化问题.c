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

//多维数组做函数参数的退化问题
int main(){
    int (*p1)[5][5];
    int a[5][5][5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            for(int k = 0; k < 5; k++){
                a[i][j][k] = 100 * (i + 1) + 10 * (j + 1) + k + 1;
            }
        }
    }
    p1 = a;
    PArr(a);
    return 0;
}
