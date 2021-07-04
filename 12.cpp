#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxi(int a, int b){
        return a>b ? a : b;
    }
    int maxValue(vector<vector<int>>& grid) {
        int dp[201][201] = {{0}};
        for(int i = 1; i < grid.size()+1; i++){
            for(int j = 1; j < grid[0].size()+1;j++){
                dp[i][j] = maxi(dp[i-1][j]+grid[i-1][j-1], dp[i][j-1] + grid[i-1][j-1]);
            }
        }
        int max = -1;
        for(int i = 0; i < grid[0].size()+1; i++){
            if(dp[grid.size()][i] > max){
                max = dp[grid.size()][i];
            }
        }
        return max;
    }
};

int main(){
	Solution s;
	vector<vector<int>> grid = {{1,3,1},{1,5,1},{4,2,1}};
	cout << s.maxValue(grid);
	return 0;
}
