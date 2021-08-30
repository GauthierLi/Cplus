#include<iostream>

using namespace std;
int main(){
    int n,step = 0;
    cin >> n;
    // 判断n是否是1
    while(n!=1){
        // 不是1的情况下若是基数则3n+1
        if(n%2 != 0) n = 3*n+1;
        // 不是2且若是偶数则除以2
        if(n%2 == 0) n = n/2;
        step += 1;
    }
    cout << step;
    return 0;
}
