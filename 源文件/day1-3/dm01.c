#include "stdio.h"
#include "stdlib.h"
#include "string.h"

//����
//���ۣ�1, �����������������˻�����,�˻�Ϊһ��ָ�����������Ч���ȴ��ݸ�����
// 2��c�������βκ�ʵ�ε�ʵ�ʲ�һ��
// 3���β��е����������鵱��ָ�봦������c���Ե��ص�
// 4������д�ں����ϻ��ߺ�������һ���ģ�ֻ����д�ں����Ͼ��ж��������

void sortArr(int a[], int num){
    int temp;
    for(int i = 0; i < num; i++){
        for(int j = i+1; j < num; j++){
            if(a[j] < a[i]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void printArr(int a[], int num){
    for(int i = 0; i < num;i++){
        printf("%d ",a[i]);
    }
}

int main11(){
    int a[] = {32,435,23,2,56,4,21};
    printArr(a,7);

    printf("hello...\n");

    //����
    sortArr(a,7);
    printArr(a,7);
    system("pause");
    return 0;
}
