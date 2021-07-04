#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int (i) = (a); (i) < (b); (i)++)

vector<int> lvguan;
int dis[14] = {0, 990, 1010,1970,2030,2940,3060,3930,4060,4970,5030,5990,6010,7000};

int main(){
	int n,A,B,temp;
	rep(i,0,14){
		lvguan.push_back(dis[i]);
	}
	cin >> A >> B;
	cin >> n;
	vector<int> re(n+14);
	re[0] = 1;
	rep(i,0,n){
		cin >> temp;
		lvguan.push_back(temp);
	}
	sort(lvguan.begin(), lvguan.end());
	rep(i, 0, (int)lvguan.size()){
		rep(j,0,i){
			if(lvguan[i] - lvguan[j] >= A && lvguan[i] - lvguan[j] <= B){
				re[i] += re[j];
			}
		}
	}
	cout << re[n+13];
	return 0;
}
