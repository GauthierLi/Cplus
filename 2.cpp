#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int (i) = (a) ; (i) < (b); (i)++) 

const int maxn = 10011;
int a[maxn][maxn];

int totalCore(int x, int y, int n){
	int total = 0;
	rep(i, 0, n){
		total += a[i][y];
		total += a[x][i];
	}
	return total;
}

int main(){
	int n;
	vector< pair<int, int> > val;
	cin >> n;
	rep(i, 0, n){
		rep(j, 0, n){
			cin >> a[i][j];
			if(a[i][j] == 0){
				pair<int, int> temp;
				temp.first = i;
				temp.second = j;
				val.push_back(temp);
			}
		}
	}
	int x, y, max_core = 0;
	if((int) val.size() == 0){
		cout << "Bad Game!";
	}else{
		rep(i, 0, (int)val.size()){
			max_core = max(max_core, totalCore(val[i].first, val[i].second, n));
		}
		cout << max_core;
	}
	return 0;
}
