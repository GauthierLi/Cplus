#include "stdlib.h"
#include "stdio.h"
#include "string.h"

//����һ���ṹ��
typedef struct Teacher{
    char name[64];
    int age;
    int id;
}Teacher; //typrdef �����ض���

//���Ͷ����ͬʱ���б���������
struct student{
    char name[64];
    int age;
    int id;
}s1,s2;

void  printMesT(struct Teacher *t){
    printf("name: %s \n", t->name);
    printf("age:%d\n", t->age);
    printf("%s 's id: %d", t->name, t->id);
}

void  printMesS(struct student *t){
    printf("name: %s \n", t->name);
    printf("age:%d\n", t->age);
    printf("%s 's id: %d", t->name, t->id);
}
int main(){
    //��ʼ���ĵ�һ�ַ���ֱ�Ӹ�ֵ
    Teacher t1 = {"Mr.Li",24,160741114};

    printMesT(&t1);

    printf("\n");
    printf("\n");

    //��ʼ���ĵڶ��ַ���
    strcpy(s1.name, "Gauthier");
    s1.age = 20;
    s1.id = 20210912;
    printMesS(&s1);

    printf("\n");
    printf("\n");

    struct student s2 = {"fgfda",32,04};
    printMesS(&s2);
    return 0;
}
