#include<iostream>

using namespace std;
int main(){
    int n,step = 0;
    cin >> n;
    // �ж�n�Ƿ���1
    while(n!=1){
        // ����1����������ǻ�����3n+1
        if(n%2 != 0) n = 3*n+1;
        // ����2������ż�������2
        if(n%2 == 0) n = n/2;
        step += 1;
    }
    cout << step;
    return 0;
}
