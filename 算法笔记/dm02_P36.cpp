#include <bits/stdc++.h>
#define rep(i,a,b) for(int (i) = (a); (i) < (b); (i)++)
using namespace std;
/*
ֻ�����������������ʽΪ�������ţ���Ա�÷֣��������ʽΪ���÷���ߵĶ��飬 �÷֣�
���룺
6
3 65
2 80
1 100
2 70
3 40
3 0
�����
2 150
*/

const int maxn=100001;
int data[maxn] = {0};
int n  = 0;

int main(){
    int temp = 0, num = 0;
    cin >> n;
    rep(i,0,n){
        cin >> num;
        cin >> temp;
        data[num] += temp;
    }
    temp = -1;
    num = 0;
    rep(i, 0, n+1){
        if(temp < data[i]){
            temp = data[i];
            num = i;
        }
    }
    printf("%d %d\n", num,data[num]);
    return 0;
}
