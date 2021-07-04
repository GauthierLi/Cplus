#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int (i) = (a); (i) < (b); (i)++)
#define rev(i,a,b) for(int (i) = (a); (i) > (b); (i)--)

const int max = 100;

int main() {
	int n;
	cin >> n;
	vector<int> cute(n);
	rep(i, 0, n){
		cin >> cute[i];
	}
	rev(i, n-1, -1){
		int cnt = 0;
		rep(j, 0, i){
			if(cute[j] < cute[i]) cnt++;
		}
		cute[i] = cnt;
	}
	rep(i, 0, n){
		cout << cute[i] << " ";
	}
}
