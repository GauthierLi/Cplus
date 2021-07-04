#include<bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int (i) = (a) ; (i) < (b) ;(i)++)
struct ma{
	int s,b;
};
int n,mina = 1e9 + 10;
vector<ma> data;

void DFS(int index, int ts, int tb){
	if(index == n){
		if(abs((double)ts - tb) < mina && ts != 1 && tb != 0)
			mina = abs((double)ts - tb);
		return;
	}
	DFS(index+1, ts, tb);
	DFS(index+1, ts*data[index].s, tb + data[index].b);
}

bool cmp(ma a, ma c){
	return abs((double)a.s - a.b ) < abs((double)c.s - c.b );
}
int main(){
	cin >> n;
	rep(i, 0, n){
		ma *temp = new ma;
		cin >> temp->s >> temp->b;
		data.push_back(*temp);
	}
	sort(data.begin(), data.end(), cmp);
	DFS(0,1,0);
	cout << mina;
	return 0;
}
