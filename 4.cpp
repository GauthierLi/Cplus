#include<bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int (i) = (a) ; (i) < (b) ;(i)++)
struct cir{
	int x,y,r;
};

double dis(int x0, int y0, int x1, int y1, int x, int y);
int hmp(int x0, int y0, int x1, int y1, int x, int y ,int r);

int main(){
	int n, x1,y1,x2,y2;
	cin >> n;
	vector<cir> data(n);
	rep(i, 0, n){
		cin >> data[i].x;
	}
	rep(i, 0, n){
		cin >> data[i].y;
	}
	rep(i, 0, n){
		cin >> data[i].r;
	}
	cin >> x1>>y1>>x2>>y2;
	int cnt = 0;
	rep(i, 0, n){
		
		if(dis(x1,y1,x2,y2,data[i].x,data[i].y) <= data[i].r){
			if(dis(x1,y1,x2,y2,data[i].x,data[i].y) == data[i].r){
//				cout << i<< ":"<< dis(x1,y1,x2,y2,data[i].x,data[i].y)<<" "<<data[i].r<< " "<<hmp(x1,y1,x2,y2,data[i].x,data[i].y,data[i].r)<<endl;
				cnt += 1;
			}
			else{
//				cout << i<< ":"<< dis(x1,y1,x2,y2,data[i].x,data[i].y)<<" "<<data[i].r<< " "<<hmp(x1,y1,x2,y2,data[i].x,data[i].y,data[i].r)<<endl;
				cnt += hmp(x1,y1,x2,y2,data[i].x,data[i].y,data[i].r);
			}
	}
}
	cout << cnt;
	return 0;
}

double dis(int x0, int y0, int x1, int y1, int x, int y){
	double result, k;
	k = ((double)y0 - y1) / ((double) x0 - x1);
	result = (y - y0 - k*(x - x0))/(sqrt(1 + k*k));
	result = abs(result);
	return abs(result);
}

int hmp(int x0, int y0, int x1, int y1, int x, int y ,int r){
	double d1,d2;
	int cnt = 0;
	d1 = sqrt((double) (x - x0)*(x - x0) + (y - y0)*(y - y0));
	d2 = sqrt((double) (x - x1)*(x - x1) + (y - y1)*(y - y1));
	if(d1 > r) cnt++;
	if(d2 > r) cnt++;
	return cnt;
}
