#define _CRT_SECURE_NO_WARINGS
#include "stdlib.h"
#include "stdio.h"
#include "string.h"

void main41(){
    printf("hello...\n");

    //��鸳ֵ
    int a = 10;
    printf("&a: %d \n", &a);
    // 6422044

    *((int *)6422044) = 20;
    printf("��Ӹ�ֵ��%d\n",a);

    system("pause");
    return ;
}
