#include "stdlib.h"
#include "stdio.h"
#include "string.h"

int main(int argc, char*argv[],char **env){
    //�����������ڴ��׵�ַ
    printf("**************** begin argv ****************\n");
    for(int i = 0; argv[i]!=NULL; i++){
        printf("%s\n", argv[i]);
    }
    printf("***************** end argv *****************\n");

    printf("\n");
    printf("\n");
    printf("\n");

    //��ӡ��������
    printf("**************** begin env ****************\n");
    for(int j = 0; env[j] != NULL; j++){
        printf("%s\n",env[j]);
    }
    printf("***************** end env *****************\n");
    return 0;
}
