# include <bits/stdc++.h>
using namespace std;

# define MAX 10000
int dis[MAX][MAX], v[MAX], dis_[MAX][MAX];
int fun(int di[MAX][MAX],int di_[MAX][MAX], int n,int A,int B);
int main()
{
	int n,m,d,i_, j_,k_,A,B;
	cin >> n >> m;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			dis[i][j] = 0;
			dis_[i][j] = 0;
		}
	}
	for(int i = 0; i < m; i++)
	{
		cin >> i_ >> j_ >> k_;
		dis[i_-1][j_-1] = k_;
		dis_[i_-1][j_-1] = k_;
	}
	cin >> d;
	for(int i = 0; i< d; i++)
	{
		cin >> i_ >> j_;
		dis_[i_-1][j_-1] = 0; 
	}
	cin >> A >> B;
	cout << fun(dis,dis_,n,A,B) ;
	return 0;
}
int fun(int di[MAX][MAX],int di_[MAX][MAX], int n,int A,int B)
{
	int sum = 0,temp;
	for(int i = 0;i < n;i++)
	{
		v[i] = 0;
	}
	v[A-1] = 1;
	for(int k = 0;k < n+1;k++)
	{
		int min = 99999999;
		for(int i = 0;i < n;i++)
		{
			if(v[i] == 1)
			{
				for(int j = 0; j < n; j++)
				{
					if(v[j] == 0 && min > di[i][j])
					{
						if(di_[i][j] == 0 && di[i][j] != 0)
						{
							min = di[i][j];
							temp = j;
						}
					}
				}
			}
		}
		if(min != 99999999)
		{
			sum += min;
			v[temp] = 1;
			if(temp == B-1) break;
		}
	}
	return sum;
}
