#include "stdlib.h"
#include "stdio.h"
#include "string.h"

// 数据类型的本质：固定大小的内存块的别名
// b, &b 数组数据类型，（1，数组 2，数组指针类型 3，数组类型和数组指针类型的关系）
int main31(){
    int a;
    int b[10];

    printf("b: %d, b+1: %d, &b: %d, &b+1: %d\n", b, b+1, &b, &b+1);
    // b: 6422000, b+1: 6422004, &b: 6422000, &b+1: 6422040
    // b+1 和 &b+1不一样， b 和 &b所代表的数据类型不一样， b代表的是数组首元素的地址， &b 代表的是整个数组的地址

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
