#include "stdlib.h"
#include "stdio.h"
#include "string.h"

void getStr(char myArr[][30],int *len){
    int j =0;
    *len =0;
    char p1[100] = "abcdef,abccd,ardfg,bgrtre,ddddd";
    int clen = strlen(p1);
    char tempChar[30];

    for(int i = 0; i <= clen; i++){
        if(p1[i] != ',' && p1[i] != '\0'){
            tempChar[j++] = p1[i];
        }else{
            tempChar[j] = '\0';
            strcpy(myArr[*len] , tempChar);
            *len += 1;
            tempChar[30] = "a";
            j = 0;
        }

    }
}

int main(){
    char Arr[5][30];
    int l = 0,num = 5;

    getStr(Arr, &l);
    for(int i = 0; i < num; i++){
        printf("%s \n", Arr[i]);
    }
    printf("%d",num);
    return 0;
}
