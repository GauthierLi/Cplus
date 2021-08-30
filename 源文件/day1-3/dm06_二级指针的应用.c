#include "stdlib.h"
#include "stdio.h"
#include "string.h"

/*求文件中两段话的长度*/
int getMem(char** myp1, int* mylen1, char** myp2, int* mylen2){
    char* tmp1 = NULL;
    char* tmp2 = NULL;
    tmp1 = (char*)malloc(1000);
    if(tmp1 == NULL){
        return -1;
    }
    strcpy(tmp1,"abbcdef1");
    *mylen1 = strlen(tmp1);
    *myp1 = tmp1;

    tmp2 = (char*)malloc(1000);
    if(tmp2 == NULL){
        return -1;
    }
    strcpy(tmp2,"abbcdef2");
    *mylen2 = strlen(tmp2);
    *myp2 = tmp2;

    return 0;
}

int main60(){
    char* p1 = NULL, * p2 = NULL ;
    int len1 = 0, len2 = 0;

    getMem(&p1, &len1, &p2, &len2);

    printf("p1:%s   len1:%d\n", p1,len1);
    printf("p1:%s   len2:%d\n", p2,len2);


    return 0;
}

















