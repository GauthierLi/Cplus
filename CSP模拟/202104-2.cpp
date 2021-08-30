#include <bits/stdc++.h> 
#define rep(i,a,b) for(int (i) = (a); (i) < (b); (i)++)
using namespace std;

const int maxn = 601;
int n = 0,L = 0,r = 0,t = 0;
vector<vector<int> >datan;

/*
提交编号	用户名	姓名	试题名称	提交时间	代码长度	编程语言	评测结果	得分	时间使用	空间使用
2552482	 <李伟康><李伟康> 邻域均值	 07-17 15:24	910B    	C++	       运行超时	    70	   运行超时	    5.570MB
printVec(vector<vector<int> > vec, int q){
	rep(i,0,q){
		rep(j,0,q){
			printf("%d ", vec[i][j]);
		}
		printf("\n");
	}
}
*/

int findDark(int x, int y,int z){
	double result = 0,sum = 0, cnt = 0;
	rep(i,0,n){
		if(abs(x - i) > r) continue;
		rep(j,0,n){
			if(abs(y - j) > r) continue;
			sum += datan[i][j];
			cnt++;
		}
	}
	result = sum/cnt;
	if(result <= z)
		return 1;
	else
		return 0;
	
}

int main(){
	scanf("%d %d %d %d", &n,&L,&r,&t);
	int tempInt = 0,darkPlace = 0;
	vector<int> tempVec;
	rep(i,0,n){
		datan.push_back(tempVec);
		rep(j,0,n){
			cin >> tempInt;
			datan[i].push_back(tempInt);
		}
	}
	rep(i, 0, n){
		rep(j, 0, n){
			darkPlace += findDark(i,j,t);
		}
	}
	printf("%d", darkPlace);
	return 0;
}
