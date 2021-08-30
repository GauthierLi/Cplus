#include "stdlib.h"
#include "stdio.h"
#include "string.h"

void inverseArr(char *myArr){
    char *p1 = NULL;
    p1 = myArr;
    if(*p1 == '\0' || p1 == NULL) return;
    inverseArr(p1+1); //此处先不执行，进行入栈操作，后进先出
    printf("%c",*p1);
}

int main(){
    char *p1 = "avsbfgsfg";
    int len1 = strlen(p1);
    inverseArr(p1);
    return 0;
}
