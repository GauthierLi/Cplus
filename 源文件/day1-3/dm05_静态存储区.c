#include "stdlib.h"
#include "stdio.h"
#include "string.h"

char * getStr1(){
    char *p1 = "cdefghi";
    return p1;
}

char* getStr2(){
    char *p2 = "cdefghi";
    return p2;
}

int main50(){
    char* p1;
    char* p2;
    p1 = getStr1();
    p2 = getStr2();

    printf("p1:%s, p2:%s\n", p1,p2);
    printf("p1:%d, p2:%d\n",p1,p2);
    printf("hello....\n");
    return 0;
}
