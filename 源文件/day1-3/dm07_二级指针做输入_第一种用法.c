#include "stdlib.h"
#include "stdio.h"
#include "string.h"


//交换的是内存指向
void printArr(char **Arr1, int num){
    for(int i = 0; i < num; i++){
        printf("%s\n",Arr1[i]);
    }
}

int main(){
    char *myArr[] = {"bbbb",  "dddd", "1111", "aaaa", "cccc"};
    int num = sizeof(myArr)/sizeof(myArr[0]);
    printf("%d\n", num);
    printf("%d %d %d:%s\n",myArr,&myArr,myArr[0],myArr[0]);
    printArr(myArr,5);
    for(int i = 0; i < num; i++){
        for(int j = i+1; j < num; j++){
            if(strcmp(myArr[i], myArr[j]) > 0){
                char *tmp = NULL;
                tmp = myArr[j];
                myArr[j] = myArr[i];
                myArr[i] = tmp;
            }
        }
    }
    printf("After:\n");
    printArr(myArr,5);
    return 0;
}
