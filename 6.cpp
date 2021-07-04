#include<bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int (i) = (a); (i) < (b); i++)

const int maxn = 101;
const int maxv = 1001;

int w[maxn], c[maxn], dp[maxv]; //w是时间， c是草药价值 

int main(){
	int n, V;
	cin >> V >>n;
	rep(i, 1, n+1){
		cin >> w[i];
		cin >> c[i];
	}
	//边界
	rep(v,0,V+1){
		dp[v]=0;
	} 
	rep(i, 1, n+1){
		for(int v = V; v >= w[i]; v--) {
			dp[v] = max(dp[v], dp[v-w[i]] + c[i]);
		}
	}
	
	int max = 0;
	rep(v, 0, V+1){
		if(dp[v] > max){
			max = dp[v];
		}
	}
	cout << max;
	return 0;
}
