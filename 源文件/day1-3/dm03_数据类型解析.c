#include "stdlib.h"
#include "stdio.h"
#include "string.h"

// �������͵ı��ʣ��̶���С���ڴ��ı���
// b, &b �����������ͣ���1������ 2������ָ������ 3���������ͺ�����ָ�����͵Ĺ�ϵ��
int main31(){
    int a;
    int b[10];

    printf("b: %d, b+1: %d, &b: %d, &b+1: %d\n", b, b+1, &b, &b+1);
    // b: 6422000, b+1: 6422004, &b: 6422000, &b+1: 6422040
    // b+1 �� &b+1��һ���� b �� &b��������������Ͳ�һ���� b�������������Ԫ�صĵ�ַ�� &b ���������������ĵ�ַ

    printf("hello....\n");
    return 0;
}

typedef struct Teacher{
    char name[64];
    int age;
}Teacher;

typedef int u32;

int main32(){
    Teacher t1;
    t1.age = 31;
    printf("type u32: %d", sizeof(u32));
    return 0;
}
