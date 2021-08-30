#include<iostream>
using namespace std;
const int maxn = 100000;
int scholl[maxn] = {0};

int main(){
    int cnt,schID,score;
    cin >> cnt;
    for(int i = 0; i < cnt; i++){
        cin >> schID >> score;
        scholl[schID] += score;
    }
    int maxID = 0, maxScore = -1;
    for(int i = 0; i < cnt; i++){
        if(scholl[i] > maxScore){
            maxID = i;
            maxScore = scholl[i];
        }
    }
    cout << maxID << " " << maxScore;
    return 0;
}
