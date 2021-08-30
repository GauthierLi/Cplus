#include "stdio.h"
#include "stdlib.h"
#include "string.h"

//排序
//结论：1, 数组做函数参数的退化问题,退化为一个指正和数组的有效长度传递给函数
// 2，c语言中形参和实参的实质不一样
// 3，形参中的数组会把数组当成指针处理，这是c语言的特点
// 4，参数写在函数上或者函数内是一样的，只不过写在函数上具有对外的属性

void sortArr(int a[], int num){
    int temp;
    for(int i = 0; i < num; i++){
        for(int j = i+1; j < num; j++){
            if(a[j] < a[i]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void printArr(int a[], int num){
    for(int i = 0; i < num;i++){
        printf("%d ",a[i]);
    }
}

int main11(){
    int a[] = {32,435,23,2,56,4,21};
    printArr(a,7);

    printf("hello...\n");

    //排序
    sortArr(a,7);
    printArr(a,7);
    system("pause");
    return 0;
}
