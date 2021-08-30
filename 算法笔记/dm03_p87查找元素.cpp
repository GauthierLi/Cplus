#include "bits/stdc++.h"
#define rep(i,a,b) for(int (i) = (a); (i) < (b); (i)++)
using namespace std;

const int maxn = 201;
int data[maxn] = {0};

int main(){
    int x,n;
    cin >> n;
    rep(i, 0, n){
        cin >> data[i];
    }
    cin >>x;
    rep(j, 0, n){
        if(data[j] == x){
            printf("%d", j);
            return 0;
        }
    }
    printf("%d", -1);
    return 0;
}
