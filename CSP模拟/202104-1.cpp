#include"bits/stdc++.h"
#define rep(i,a,b) for(int (i) = (a); (i) < (b); (i)++)
using namespace std;

const int maxn = 260;
int n = 0 ,m = 0, L = 0;
int dataL[maxn] = {0};

int main(){
    int temp = 0;
    cin >> n >> m >> L;
    rep(i, 0, n){
        rep(j, 0, m){
            cin >> temp;
            dataL[temp] += 1;
        }
    }
    rep(i,0,L){
        printf("%d ", dataL[i]);
    }
    return 0;
}
