#include <bits/stdc++.h>

using namespace std;
const long long maxiam = 999;

int main()
{
	long long h[maxiam], dp[maxiam], n;
	cin >> n;
	dp[1] = 0;
	for(int i = 1; i <= n; i++)
	{
		cin >> h[i];
	}
	for(int i = 2; i <= n; i++)
	{
		dp[i] = min(dp[i-1] + abs(h[i-1] - h[i]), dp[i-2] + abs(h[i-2] - h[i]));
	}
	cout << dp[n];
	return 0;
 } 
