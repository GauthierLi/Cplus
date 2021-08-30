#include <stdio.h>

using namespace std;

void printList(int *a, int num){
    for(int i = 0; i < num; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

void sortList(int *a, int num){
    int temp = 0;
    for(int i = 0; i < num; i++){
        for(int j = i+1; j < num; j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main(){
    int numList[] = {12,43,56,3,214,56,5,43,1};
    int cnt = sizeof(numList)/sizeof(numList[0]);
    printList(numList, cnt);
    sortList(numList, cnt);
    printList(numList,cnt);
    return 0;
}
