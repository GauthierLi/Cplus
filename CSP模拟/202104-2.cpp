#include <bits/stdc++.h> 
#define rep(i,a,b) for(int (i) = (a); (i) < (b); (i)++)
using namespace std;

const int maxn = 601;
int n = 0,L = 0,r = 0,t = 0;
vector<vector<int> >datan;

/*
�ύ���	�û���	����	��������	�ύʱ��	���볤��	�������	������	�÷�	ʱ��ʹ��	�ռ�ʹ��
2552482	 <��ΰ��><��ΰ��> �����ֵ	 07-17 15:24	910B    	C++	       ���г�ʱ	    70	   ���г�ʱ	    5.570MB
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
