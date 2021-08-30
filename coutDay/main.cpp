#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

const int month[13][2] = {{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};
int data[2] = {0};

/*1，提取年月日*/
void getYMD(int data/*in*/, int* year/*out*/, int *month/*out*/, int *day/*out*/){
    *year = data/10000;
    *month = (data - *year * 10000)/100;
    *day = data%100;
}
/*2，判断是否闰年*/
bool isRun(int year/*in*/){
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        return true;
    }else{
        return false;
    }
}
/*3，计数二者之间间隔天数*/
int countDay(){
    int temp_data[2] = {0};
    temp_data[0] = data[0];
    temp_data[1] = data[1];

    int year1 = 0,month1 = 0,day1 = 0,year2 = 0,month2 = 0,day2 = 0, cnt = 0, tmp = 0, weight = 0;
    if(temp_data[0] > temp_data[1]){
        tmp = temp_data[0];
        temp_data[0] = temp_data[1];
        temp_data[1] = tmp;
    }
    getYMD(temp_data[0], &year1, &month1, &day1);
    getYMD(temp_data[1], &year2, &month2, &day2);
    if(day1 != day2) cnt++;

    while(year1 != year2){
        isRun(year1++) ? cnt += 366 : cnt+= 365;
    }

    month1 < month2 ? weight = 1 : weight = -1;
    tmp = isRun(year1);
    while(month1 != month2){
        cnt += weight * month[month1][tmp];
        month1 += weight;
    }

    day1 < day2 ? weight = 1: weight = -1;
    while(day1 != day2){
        cnt += weight;
        day1 += weight;
    }
    return cnt;
}

/*打印爱心*/
void printLove(){
    float y, x, a;
        for (y = 1.5f;y > -1.5f;y -= 0.1f)
        {
            for (x = -1.5f;x < 1.5f;x += 0.05f)
            {
                a = x*x + y*y - 1;
                putchar(a*a*a - x*x*y*y*y <= 0.0f ? '*' : ' ');
            }
            putchar('\n');
        }
}


int main(){
    SYSTEMTIME st;//定义本地时间
    GetLocalTime(&st);//获取时间
    int curTime = st.wYear * 10000 + st.wMonth * 100 + st.wDay;
    data[0] = 20190517;
    data[1] = curTime;

//    printf("please enter the begin date and the end date(eg:19980828 20000828):\n");
//    scanf("%d\n%d",&data[0], &data[1]);
    printf("Spend with myBabyHan the %dth day!\nHappy Qixi day!",countDay());
    printLove();
    system("pause");
    return 0;
}
